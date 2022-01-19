#include "Header.h"
ListNode *detectCycle(ListNode *head)
{
        
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        
        set<ListNode *> stList;
        for (ListNode *node = head; node != nullptr; node = node->next)
        {
            if (stList.find(node) == stList.end()){
            
                stList.insert(node);
            } else {
                return node;
            }
        }
        return nullptr;
}