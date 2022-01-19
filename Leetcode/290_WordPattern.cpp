#include "Header.h"

#if TEST290

bool wordPattern(string pattern, string s) {
    istringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    if (words.size() != pattern.size()) return false;

    int n = words.size(); // equal to pattern.size()

    unordered_map<char, int> pMap;
    unordered_map<string, int> wMap;
    unordered_map<char, string> pwMap;
    int pVal = 0;
    int wVal = 0;
    for (int i = 0; i < n; i++)
    {
        pVal = 0;
        wVal = 0;
        if (pMap.find(pattern[i]) != pMap.end()) {
            pVal = pMap[pattern[i]];
        }
        pVal++;
        pMap[pattern[i]] = pVal;

        if (wMap.find(words[i]) != wMap.end()) {
            wVal = wMap[words[i]];
        }
        wVal++;
        wMap[words[i]] = wVal;

        if ((pVal == 1) && (wVal == 1)) {
            pwMap[pattern[i]] = words[i];
        }
        else {


            if (pVal != wVal)
                return false;
            if (pVal == wVal)
            {
                if (pwMap[pattern[i]] == words[i]) {
                    continue;
                }
                return false;
            }
        }
    }
    return true;
}
#endif