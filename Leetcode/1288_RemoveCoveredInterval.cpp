int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> v1, vector<int> v2) { 
            if (v1[0] == v2[0])
                return (v1[1] > v2[1]);
            return (v1[0] < v2[0]);
        });
        int cur;
        int last = INT_MIN;
        int cnt = 0;
        for (int i = 0; i < intervals.size(); i++) {
            cur = intervals[i][1];
            if (last >= cur) cnt++;
            last = max(last, cur);
        }
        return (intervals.size() - cnt);
    }