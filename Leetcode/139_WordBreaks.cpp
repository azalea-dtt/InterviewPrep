#include "Header.h"
#if TEST139
bool wordBreak(string s, vector<string>& wordDict)
{
	vector<bool> dp(s.length() + 1, false);
	dp[s.length()] = true; // if we can break and find all words in wordDict--> true
	// do the problem from the bottom up
    //"leetcode": dp[1] = dp[5] = dp[8] = true
	for (int i = s.length(); i >= 0; i--)
	{
		for (int j = 0; j < wordDict.size(); j++)
		{
			string word = wordDict[j];
			if (i + word.length() <= s.length() && (s.substr(i, word.length()) == word))
			{
				dp[i] = dp[i + word.length()];
			}
			if (dp[i]) break; //don't need to loop for the remaining words in wordDict
		}
	}

	return dp[0];
}
#endif