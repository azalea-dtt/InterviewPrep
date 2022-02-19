 int minimumDeviation(vector<int>& nums) {
        priority_queue<int> maxHeap;
        int minNum = INT_MAX; //min value of nums
        int diff = INT_MAX;
        for (auto num: nums) {
            if (num%2 == 1) {
                num *= 2;
            }
            maxHeap.push(num);
            minNum = minNum < num ? minNum:num; 
        }
        while(maxHeap.top() % 2 == 0) {
            int maxNum = maxHeap.top();
            maxHeap.pop();
            diff = diff < (maxNum - minNum) ? diff: (maxNum - minNum);
            minNum = minNum < maxNum/2 ? minNum:maxNum/2; 
            maxHeap.push(maxNum/2);
        }
        diff = diff < maxHeap.top()-minNum ? diff: maxHeap.top()-minNum;
        return diff;
    }