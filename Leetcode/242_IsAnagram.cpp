#include "Header.h"
#if TEST242
bool isAnagram(string s, string t)
{
	vector<int> vS(26, 0);
	vector<int> vT(26, 0);
	if (s.length() != t.length()) return false;
	for (int i = 0; i < s.length(); i++)
	{
		vS[s[i] - 'a']++;
		vT[t[i] - 'a']++;
	}
	return (vS == vT ? true : false);
}
#endif