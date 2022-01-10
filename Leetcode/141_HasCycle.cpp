#include "Header.h"

#if TEST141
bool hasCycle(ListNode* head)
{
	unordered_map<ListNode*, int> listMap;
	for (ListNode* cur = head;cur != nullptr; cur = cur->next)
	{
		if (listMap.find(cur) == listMap.end())
		{
			listMap[cur] = cur->val;
		}
		else {
			return true;
		}
	}
	return false;
}
#endif