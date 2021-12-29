#include "Header.h"
#include <stack>
#if TEST394
string decodeString(string s)
{
	string result;
	stack<string> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ']')
		{
			string si{s[i]};
			st.push(si);
		}
		else {
			string subStr = "";
			while (st.top() != "[")
			{
				subStr.insert(0, st.top().c_str());
				st.pop();
			}
			st.pop(); // remove '[';
			string numStr = "";
			
			while ( !(st.empty())&& (isdigit(st.top()[0]))) {
				//numStr = st.top() + numStr;
				numStr.insert(0, st.top().c_str());
				st.pop();
			}
			int num = stoi(numStr);
			for (int i = 0; i < num; i++)
				st.push(subStr);
		}
	}

	while (st.empty() == false)
	{
		result.insert(0, st.top().c_str());
		st.pop();
	}


	return result;
}
#endif