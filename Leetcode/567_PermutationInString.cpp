#include "Header.h"
#if 0
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.
#endif

#include <algorithm>

#if TEST567

bool checkInclusion(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    int len1 = s1.length();
    int len2 = s2.length();
    int start = 0;
    int end;
    string sub2;
    if (len1 > len2) return false;
    if (len1 == 0) return false;
    for (int i = 0; i < len2; i++)
    {
        start = i;
        end = start + len1 - 1;
        if (end >= len2) break;
        sub2 = s2.substr(start, len1);
        //cout << "sub2:" << sub2 << endl;
        sort(sub2.begin(), sub2.end());
        //cout << "sub2_sorted:" << sub2 << endl;
        if (sub2.compare(s1) == 0) return true;

    }


    return false;
}




#endif