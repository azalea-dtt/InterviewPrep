#include"Header.h"
#include <utility>
#include <map>
#include <iostream>
#include <set>
#if TEST149
vector<double> findLine(vector<int> point1, vector<int> point2)
{
	vector<double> lines;
	//if (point2[0] != point1[0])
	double a = double((point2[1] - point1[1])) / double((point2[0] - point1[0]));
	double b = double(point1[1] - a * point1[0]);
	lines.push_back(a);
	lines.push_back(b);
	return lines;
}
int maxPoints(vector<vector<int>>& points)
{
	
	std::map<vector<double>, set<int>> lineSet;
	std::map<int,set<int>> lineSetX;
	vector<double> line;
	if (points.size() < 2) return points.size();
	int max = 2;
	int maxX = 1;
	std::map<vector<double>, set<int>>::iterator itr;
	std::map<int, set<int>>::iterator itrX;
	for (int i = 0; i < points.size()-1; i++)
	{

		for (int j = i + 1; j < points.size(); j++) {

			if (points[i][0] == points[j][0])
			{
				itrX = lineSetX.find(points[i][0]);
				if (itrX == lineSetX.end())
				{
					set<int> l;
					l.insert(i);
					l.insert(j);
					lineSetX.emplace(points[i][0], l);
				}
				else {
					cout << "pointX:" << points[i][0];
					itrX->second.insert(i);
					itrX->second.insert(j);
					if (maxX < itrX->second.size())
						maxX = itrX->second.size();
				}
			}
			else {
				line = findLine(points[i], points[j]);
				itr = lineSet.find(line);
				if (itr == lineSet.end())
				{

					set<int> l; 
					l.insert(i);
					l.insert(j);
					lineSet.emplace(line, l);

				}
				else {
					//cout << line[0] << " , " << line[1] << endl;
					std::set<int>::iterator it;
					
					itr->second.insert(i);
					itr->second.insert(j);
					//set<int> myset = itr->second;
					//for (it = myset.begin(); it != myset.end(); ++it)
						//std::cout << ' ' << *it;
					if (max < itr->second.size())
						max = itr->second.size();
				}
			}
		}

	}
	cout << "max:" << max << endl;
	cout << "maxX:" << maxX << endl;
	return max>maxX?max:maxX;
}
#endif