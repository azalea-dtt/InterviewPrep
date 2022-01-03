#include "Header.h"
#if TEST108
TreeNode* sortedArrayToBST(vector<int>& nums) {
    if (nums.size() == 0) return nullptr;
    int left = 0;
    int right = nums.size() - 1;
    return bst(nums, left, right);

}
TreeNode* bst(vector<int>& nums, int left, int right)
{
    if (left > right) return nullptr;
    int mid = left + (right - left) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = bst(nums, left, mid - 1);
    root->right = bst(nums, mid + 1, right);
    return root;
}
#endif