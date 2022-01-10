#include "Header.h"

#if TEST67
void sumOfTwoDigits(int val1, int val2, int& sumDigit, int& carry)
{
	if (val1 & val2)
	{
		if (val1 | val2)
		{
			sumDigit = 0;
			carry = 1;
		}
		
	}
	else {
		if (val1 | val2)
		{
			sumDigit = 1;
			carry = 0;
		}
		else {
			sumDigit = 0;
			carry = 0;
		}

	}
}
string addBinary(string a, string b)
{
	string result;
	int lenA = a.length();
	int lenB = b.length();
	int digitA;
	int digitB;
	int carry = 0;
	int prev_carry = 0;
	int sumDigit;
	int idx = 0;
	while (idx < lenA && idx < lenB)
	{
		digitA = a[lenA - idx - 1] - '0';
		digitB = b[lenB - idx - 1] - '0';
		prev_carry = carry;
		sumOfTwoDigits(digitA, digitB, sumDigit, carry);
		if (prev_carry > 0) {
			int temp = carry;
			int temp1 = sumDigit;
			sumOfTwoDigits(temp1, prev_carry, sumDigit, carry);
			carry += temp;
		}
		//set result
		if (sumDigit == 0)
			result.insert(result.begin(), '0');
		else result.insert(result.begin(), '1');
		idx++;

	}
	if (idx == lenA)
	{
		//remain from string b
		while (idx < lenB)
		{
			digitB = b[lenB - idx - 1] - '0';
			digitA = carry;
			sumOfTwoDigits(digitA, digitB, sumDigit, carry);
			if (sumDigit == 0)
				result.insert(result.begin(), '0');
			else result.insert(result.begin(), '1');
			idx++;
		}
	}
	else {
		while (idx < lenA) {
			//remain from string a
			digitA = a[lenA - idx - 1] - '0';
			digitB = carry;
			sumOfTwoDigits(digitA, digitB, sumDigit, carry);
			if (sumDigit == 0)
				result.insert(result.begin(), '0');
			else result.insert(result.begin(), '1');
			idx++;
		}
	}
	if (carry > 0)
		result.insert(result.begin(), '1');
	return result;
}
#endif