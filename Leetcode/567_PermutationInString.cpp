#include "Header.h"
#include <algorithm>
#if 0
Given two strings s1and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

A Permutation of a string is another string that contains same characters, only the order of characters can be different.
For example, ¡°abcd¡±and ¡°dabc¡± are Permutation of each other
#endif

bool checkInclusion(string s1, string s2)
{
	cout << "before: " << s1 << endl;
	cout << "before: " << s2 << endl;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	cout << "after: " << s1 << endl;
	cout << "after: " << s2 << endl;
	if (s2.find(s1) != std::string::npos)
		return true;
	else return false;
}