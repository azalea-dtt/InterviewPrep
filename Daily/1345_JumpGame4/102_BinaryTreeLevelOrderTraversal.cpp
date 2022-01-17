#include <iostream>
#include <vector>
#include <queue>
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (root == nullptr) return result;

    queue<TreeNode*> visited;
    visited.push(root);
    vector<int> cur;


    while (visited.empty() == false) {
        int qSize = visited.size();

        cur.clear();
        for (int i = 0; i < qSize; i++)
        {
            TreeNode* node = visited.front();
            visited.pop();
            cur.push_back(node->val);
            if (node->left) visited.push(node->left);
            if (node->right) visited.push(node->right);

        }
        if (cur.size() > 0)
            result.push_back(cur);
    }
    return result;

}