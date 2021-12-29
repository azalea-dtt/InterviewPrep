#include "Header.h"
#if TEST938
int rangeSumBST(TreeNode* root, int low, int high) {
    int sum = 0;
    if (root == nullptr) return sum;

    PreOrderSumBst(root, low, high, sum);
    return sum;

}
void PreOrderSumBst(TreeNode* root, int low, int high, int& sum)
{
    // root - left -right
    if (root == nullptr) return;
    if (root->val >= low && root->val <= high)
        sum += root->val;
    PreOrderSumBst(root->left, low, high, sum);
    PreOrderSumBst(root->right, low, high, sum);
}
#endif