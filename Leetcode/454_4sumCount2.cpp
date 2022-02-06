int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> sum12;
        int count = 0;
        
        for (int i = 0; i< nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (sum12.find(nums1[i]+nums2[j]) == sum12.end())
                {
                    sum12[nums1[i] + nums2[j]] = 1;
                }
                else {
                    int temp = sum12[nums1[i] + nums2[j]];
                    sum12[nums1[i] + nums2[j]] = temp+1;
                }
            }
        }
        for (int i = 0; i< nums3.size(); i++) {
            for (int j = 0; j < nums4.size(); j++) {
                if (sum12.find(-(nums3[i]+nums4[j])) != sum12.end())
                {
                    count+= sum12[-(nums3[i]+nums4[j])];
                }
            }
        }
        return count;
        
    }