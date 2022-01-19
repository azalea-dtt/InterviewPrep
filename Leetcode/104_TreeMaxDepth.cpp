#include <iostream>

int maxDepth(TreeNode* root) {
    if (root == nullptr) return 0; //base case

    //get the result from previous level
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    return (max(left, right) + 1);
}