// 1345_JumpGame4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <set>
using namespace std;

int minJumps(vector<int>& arr);
int main()
{
    vector<int> arr{ 7,7,2,1,7,7,7,3,4,1 };
    int result = minJumps(arr);
    cout << "result: " << result << endl;
}
bool isValid(int i, int n, unordered_map<int, vector<int>> iMap, vector<int> arr)
{
    //if ((i >= 0) && (i < n) && (visited.find(i)== visited.end())) return true;
    if ((i >= 0) && (i < n) && (iMap.find(arr[i]) != iMap.end())) return true;
    return false;
}

int minJumps(vector<int>& arr)
{
    int n = arr.size();
    if (n == 0) return 0;
    if (n == 1) return 0;
    unordered_map<int, vector<int>> iMap; //int: value ; vector<int> idx with same value

    for (int i = 0; i < n; i++)
    {
        iMap[arr[i]].push_back(i);
    }
    
    
    queue<int> visits;
    vector<int> steps(n+1,-1);
    steps[0] = 0;
    visits.push(0);
    while (visits.empty() == false) {
        int sizeQ = visits.size();
        for (int i = 0; i < sizeQ; i++)
        {
            int cur = visits.front();
            visits.pop();
            if (cur == n - 1) return steps[cur];

            if (cur - 1 > 0 && steps[cur - 1] == -1) // not visit, cur - 1 valid
            {
                visits.push(cur - 1);
                steps[cur - 1] = steps[cur] + 1; // to visit cur - 1, we need the number of steps to visit cur and 1 more step
            }
            if (cur + 1 < n && steps[cur + 1] == -1) {
                visits.push(cur + 1);
                steps[cur + 1] = steps[cur] + 1; // to visit cur + 1, we need the number of steps to visit cur and 1 more step
            }
            if (iMap.find(arr[cur]) != iMap.end()) {
                vector<int> sameVal = iMap[arr[cur]];
                if (sameVal.size() > 1)
                {
                    for (int j = 0; j < sameVal.size(); j++) {
                       
                        if ((sameVal[j] != cur - 1 || sameVal[j] != cur + 1) && (steps[sameVal[j]]) == -1)
                        {
                            visits.push(sameVal[j]);
                            steps[sameVal[j]] = steps[cur] + 1;
                        }
                    }
                }
            }
            iMap.erase(arr[cur]);
            
        }
        
    }

        
    

    return -1;

}