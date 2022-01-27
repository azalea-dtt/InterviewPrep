class Solution {
public:
    class Trie {
        public:
            vector<Trie *> nodes {nullptr, nullptr};
    };
    
    Trie *troot = new Trie();
    
    void insert(int key) {
        Trie* root = troot;
        for(int i = 30;i>= 0;i--){
            int idx = (key >> i) & 1;
            if(root->nodes[idx] == nullptr) 
                root->nodes[idx] = new Trie();
            root = root->nodes[idx];
        }
    }
    int  find(int key){
        Trie* root = troot;
        int res=0;
        for(int i = 30;i >= 0;i--) {
            int idx = (key >>i ) & 1;
            if(root->nodes[1-idx] != nullptr) {
                res += pow(2,i);
                root = root->nodes[1-idx];
            }
            else root = root->nodes[idx];
        }
        return res;
    }
    int findMaximumXOR(vector<int>& nums) {
        int ans = 0;
        insert(nums[0]);
        for(int i=1;i < nums.size();i++) {
            ans=max(ans,find(nums[i]));
            insert(nums[i]);
        }
        return ans;
    }
};