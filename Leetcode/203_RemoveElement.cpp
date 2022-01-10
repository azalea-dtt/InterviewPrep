#include "Header.h"

#if TEST203
ListNode* removeElements(ListNode* head, int val)
{
	if (head == nullptr) return head;
	while ((head != nullptr) && (head->val == val)) {

		head = head->next;
		if (head == nullptr) return nullptr;

	}
	ListNode* prev = head;
	for (ListNode* cur = head->next; cur != nullptr; )
	{
		if (cur->val == val)
		{
			prev->next = cur->next;
			cur = cur->next;

		}
		else {
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}
#endif