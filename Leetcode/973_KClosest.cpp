#include "Header.h"
#include <map>
#if TEST973
vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
{
	vector<vector<int>> result;
	std::multimap<double, int> distanceMap; //key: distance, value: index
	double distance;
	int count = 0;
	if (k == 0 || k > points.size() ) return result;

	for (int i = 0; i < points.size(); i++)
	{
		if (points[i].size() < 2) break;
		distance = sqrt(points[i][0]*points[i][0] + points[i][1] * points[i][1]);
		distanceMap.insert(std::pair<double,int>(distance,i));
	}
	for (std::multimap<double, int>::iterator itr = distanceMap.begin(); itr != distanceMap.end(); ++itr)
	{
		result.push_back(points[itr->second]);
		count++;
		if (count == k) break;
	}
	return result;
}
#endif