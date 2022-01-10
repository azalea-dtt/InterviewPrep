#include "Header.h"
#if TEST383
bool canConstruct(string ransomNote, string magazine)
{
    vector<int> vMag(26, 0);

    for (int i = 0; i < magazine.length(); i++)
        vMag[magazine[i] - 'a']++;
    for (int i = 0; i < ransomNote.length(); i++)
    {
        vMag[ransomNote[i] - 'a']--;
        if (vMag[ransomNote[i] - 'a'] < 0) return false;
    }

    return true;
}
#endif