#include "Header.h"
#if 0
You are given the head of a singly linked - list.The list can be represented as :

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form :

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.
#endif
#if TEST143
void reorderList(ListNode* head)
{
	int count = 0;
	vector<ListNode*>vList;
	for (ListNode* node = head; node != nullptr; node = node->next)
	{
		vList.push_back(node);		
	}
	count = vList.size();
	int rIdx = vList.size() - 1;
	int lIdx = 1;
	if (count <= 2) return;
	ListNode* prev = head;
	for (ListNode* cur = prev->next; cur != nullptr; cur = cur->next)
	{
		prev->next = vList[rIdx];
		vList[rIdx]->next = cur;
		prev = cur;
		lIdx++;
		rIdx--;
		
		
		
		if (lIdx >= (count / 2 + 1)) break;
	}
	prev->next = nullptr;

}
#endif