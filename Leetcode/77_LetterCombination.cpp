#include "Header.h"

#if TEST17
unordered_map<char, string> digitMap = {
	{'2', "abc"},
	{'3',"def"},
	{'4',"ghi"},
	{'5',"jkl"},
	{'6',"mno"},
	{'7',"pqrs"},
	{'8',"tuv"},
	{'9',"wxyz"}
};
void backtrack(string digits, vector<string> &result, string &curCombStr, int curIdx)
{
	if (curCombStr.length() == digits.length())
	{
		result.push_back(curCombStr);
		return;
	}
	//from curIdx --> get number in digits string --> recursive call for next position by mapping the number in curIdx pos to each of char in the mapped string
	for (auto itr : digitMap[digits[curIdx]])
	{
		curCombStr += itr;
		backtrack(digits, result, curCombStr, curIdx + 1);
		curCombStr.pop_back();
	}
}

vector<string> letterCombinations(string digits) {
	vector<string> result;
	string curCombStr="";
	if (digits.length() > 0)
		backtrack(digits, result, curCombStr, 0);
	return result;
}
#endif