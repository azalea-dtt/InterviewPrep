// JanDaily.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int maxDistToClosest(vector<int>& seats);
int main()
{
    vector<int> seats  {0,1};
    int result = maxDistToClosest(seats);
    cout << "result:" << result << endl;
}
int maxDistToClosest(vector<int>& seats)
{
    // find min_left, max_right and max_distance
    int min_left = INT_MAX;
    int max_right = INT_MIN;
    int max_distance = INT_MIN;
    int last_one = INT_MIN;
    int pos = INT_MIN;
    for (int i = 0; i < seats.size(); i++)
    {        
        if (seats[i] == 1) {
            //1. find min_left
            if (i < min_left) {
                min_left = i;
            }
            //2. find max_right
            if (i > max_right)
            {
                max_right = i;
            }
            //3. find max distance
            if (last_one >= 0)
            {
                max_distance = max(max_distance, i - last_one);
                
            }
            last_one = i;
        }

    }
    cout << "min_left:" << min_left << endl;
    cout << "max_right:" << max_right << endl;
    cout << "max_distance: " << max_distance << endl;
    int temp = max(min_left, int(seats.size()) - max_right);
    return max(temp, max_distance/2);

   
}

