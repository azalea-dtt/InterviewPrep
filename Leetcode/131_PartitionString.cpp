#include "Header.h"

#if TEST131
bool isPalindrome(string s)
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
void dfs(string s, int start, vector<string>& part, vector<vector<string>>& result)
{
	if (start >= s.length())
	{
		result.push_back(part);
		return;
	}
	string subStr;
	for (int i = start; i < s.length(); i++)
	{
		subStr = s.substr(start, i - start + 1);
		if (isPalindrome(subStr))
		{
			part.push_back(subStr);
			dfs(s, i + 1, part, result);
			part.pop_back();
		}
	}
}
vector<vector<string>> partition(string s)
{
	vector<vector<string>> result;
	vector<string> part; //current partition
	int start = 0;
	dfs(s, start, part, result);
	return result;
}

#endif