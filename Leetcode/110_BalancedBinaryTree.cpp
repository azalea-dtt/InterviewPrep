class Solution {
public:
    bool isBalanced(TreeNode* root) {
        std::tuple<bool,int> result = dfs(root);
        return std::get<0>(result);
        
    }
    std::tuple<bool, int> dfs (TreeNode *root) {
        if (root == nullptr) {
            return std::make_tuple(true,0);
        }
        std::tuple<bool, int> left = dfs(root->left);
        std::tuple<bool, int> right = dfs(root->right);
        bool balance = (std::get<0>(left)) && (std::get<0>(right)) && (abs(std::get<1>(left) - std::get<1>(right)) <=1);
        return make_tuple( balance, 1+max (std::get<1> (left), std::get<1>(right)));
    }
};