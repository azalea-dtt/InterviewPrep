#include "Header.h"

#if TEST476
int findComplement(int num)
{
	int bit = 1;
	int digit = num % 2;
	int result = 1 - digit;

	while (1)
	{
		num = num >> 1;
		if (num <= 0) break;
		digit = num % 2;
		result += (1 - digit) * pow(2, bit);
		bit++;
	}
	return result;
}
#endif