#include "Header.h"
#include <stack>
#if TEST394
string decodeString(string s)
{
	string result;
	

	string subString;
	string temp;
	int brk = 0;
	int loop = 0;
	int len = s.length();

	for (int i = len - 1; i > 0; i--)
	{
		if (isalpha(s[i]))
		{
			if (brk == 0)
				result.insert(result.begin(), s[i]);
			else {
				
			}
		}
		else if (s[i] == '[')
		{
			
			brk++;
		}
		else if (isdigit(s[i]))
		{
			loop = s[i] - '0';
			for (int i = 0; i < loop; i++)
			{
				subString += temp;
			}
			if (brk == 0)
			{
				result.insert(result.begin(), subString.begin(), subString.end());
			}

		}
		else if (s[i] == ']')
		{
			brk++;
		}

	}



	return result;
}
#endif