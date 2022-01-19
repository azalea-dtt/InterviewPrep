
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMinArrowShots(vector<vector<int>>& points) {
    if (points.size() == 0) return 0;
    if (points.size() == 1) return 1;
    sort(points.begin(), points.end(), [](const auto& x, const auto& y) {  return (x[1] < y[1]); });
    int end = points[0][1];
    int count = 1;

    for (auto& point : points)
    {
        if (point[0] > end)
        {
            count++;
            end = point[1];
        }
    }
    return count;
}
}

int main()
{
    vector<vector<int>> points{ {1,2} };
    int result = findMinArrowShots(points);
    cout << "result452: " << result << endl;
}

