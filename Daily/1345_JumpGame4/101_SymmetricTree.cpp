#include <iostream>
bool isSymmetric(TreeNode* root) {
    if (root == nullptr) return true;

    return isSymmetricHelper(root->left, root->right);
}
bool isSymmetricHelper(TreeNode* left, TreeNode* right)
{
    if ((left == nullptr) || (right == nullptr))
        return (left == right);
    if (left->val != right->val) return false;

    return (isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left));
}