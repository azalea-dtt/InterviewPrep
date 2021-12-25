#include "Header.h"
#include <set>
#include <string>
#include <algorithm>
#ifdef TEST22
void findParenthesis(set<string>& result, int num, int n);
vector<string> generateParenthesis(int n)
{
	set<string> result;
	for (int i = 1; i <= n; i++)
	{
		findParenthesis(result, i, n);
	}
	vector<string> result2(result.begin(), result.end());
	return result2;

}


void findParenthesis(set<string>& result, int num, int n)
{
	if (num > n) return;
	if (num == 0) return;
	if (num == 1) {
		result.insert("()");
		return;
	}
	set<string> substr = result;
	result.clear();
	int open1 = 0;
	int close1 = 0;
	int len = (num - 1) * 2;
	if (substr.size() > 0 && substr.begin()->length()!= len) return;
	for (int i = 0; i < num*2; i++) {
		open1 = i;
		int j = 0;
		close1 = 0;
		while (close1 < num*2) {
			close1 = open1 + 2 * j + 1;
			if ((close1 - open1-1) % ((num-1)*2) > 0)
			{
				j++;
			}
			else {
				j++;
				if ((close1 - open1) == 1)
				{
					if (open1 == 0)
					{						
						for (set<string>::iterator itr = substr.begin(); itr != substr.end(); ++itr )
						{
							string temp = "()";
							temp.insert(2, *itr);
							result.insert(temp);
						}
					}
					else if (open1 == num * 2 - 2)
					{
						for (set<string>::iterator itr = substr.begin(); itr != substr.end(); ++itr)
						{
							string temp;
							temp.insert(0, *itr);
							temp.insert(itr->size(), "()");
							//cout << "temp:" << temp << endl;
							result.insert(temp);
						}
					}
					
				}
				else {
					for (set<string>::iterator itr = substr.begin(); itr != substr.end(); ++itr)
					{
						string temp;
						temp.insert(0, "(");
						temp.insert(1, *itr);
						temp.insert(itr->size() + 1, ")");
						result.insert(temp);
					}
				}
			}

		}

	}

}
#endif