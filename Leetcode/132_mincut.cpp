#include "Header.h"
#if TEST132
bool isPali(string s)
{
	int l = 0;
	int r = s.length() - 1;
	while (l < r)
	{
		if (s[l] == s[r])
		{
			l++;
			r--;
		}
		else return false;
	}
	return true;
}

void dfs(string s, int start, vector<string>& part, int& min)
{
	if (start >= s.length())
	{
		if (min > part.size())
		{
			min = part.size();
		}
		return;
	}
	for (int i = start; i < s.length(); i++)
	{
		string subStr = s.substr(start, i - start + 1);
		if (isPali(subStr))
		{
			part.push_back(subStr);
			dfs(s,i + 1,part, min);
			part.pop_back();
		}
	}
}
int minCut(string s)
{
	vector<string> part;
	int min = INT_MAX;
	dfs(s, 0, part, min);
	return (min - 1);
}
#endif