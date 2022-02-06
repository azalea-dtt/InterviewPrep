int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>sumMap;
        int sum = 0;
        int maxLen = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                sum += 1;
            else sum -= 1;
            
            if (sum == 0)
                maxLen = max(maxLen,i+1);
            if (sumMap.find(sum) == sumMap.end()) {
                sumMap[sum] = i;
            } else {
                maxLen = max(maxLen, i - sumMap[sum]);
                
            }
            
        }
        return maxLen;
    }