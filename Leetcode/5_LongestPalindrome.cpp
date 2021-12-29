#include "Header.h"
#if TEST5
string longestPalindrome(string s)
{
	string sRes = "";
	int maxLen = 0;
	int l = 0;
	int r = 0;

	for (int i = 0; i < s.length(); i++)
	{
		//1. odd len --> i is in the middle --> extend l = i-k; r = i+k
		l = i;
		r = i;
		while (l>=0 && r < s.length())
		{
			if (s[l] == s[r])
			{
				if (maxLen < (r - l + 1))
				{
					sRes = s.substr(l, r - l + 1);
					maxLen = r - l + 1;
				}
				l--;
				r++;
			}
			else break;
			
		}
		//2. even len --> l = i; r= i+1
		l = i;
		r = i + 1;
		while (l >= 0 && r < s.length())
		{
			if (s[l] == s[r])
			{
				if (maxLen < (r - l + 1))
				{
					sRes = s.substr(l, r - l + 1);
					maxLen = r - l + 1;
				}
				l--;
				r++;

			}
			else break;
			
		}
	}
	return sRes;
}
#endif