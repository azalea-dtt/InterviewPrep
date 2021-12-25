#include "Header.h"
#include "ListNode.h"

ListNode* BuildList(std::vector<int> nums)
{
	ListNode* head = new ListNode(nums[0]);
	ListNode* prev = head;
	for (int i = 1; i < nums.size(); i++)
	{
		ListNode* node = new ListNode(nums[i]);
		prev->next = node;
		prev = node;
	}
	prev->next = nullptr;
	return head;
}