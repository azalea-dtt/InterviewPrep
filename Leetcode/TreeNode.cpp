#include "TreeNode.h"
#include <vector>

TreeNode* BuildTree(std::vector<int> nums, int curIdx) //build tree with level
{
	TreeNode* root;
	if (curIdx > nums.size() - 1) return nullptr;
	int val = nums[curIdx];
	if (val == -1) return nullptr;
	root = new TreeNode(val);
	
	root->left = BuildTree(nums, 2*curIdx+1);
	root->right = BuildTree(nums, 2*curIdx+2);
	return root;
}