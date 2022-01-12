#include "Header.h"

#if TEST83
ListNode* deleteDuplicates(ListNode* head) {
    if ((head == nullptr) || (head->next == nullptr))
        return head;
    ListNode* first = head;
    ListNode* second = head->next;

    while ((first != nullptr) && (second != nullptr)) {
        if (first->val == second->val)
        {
            second = second->next;
            if (second == nullptr) {
                first->next = nullptr;
                break;
            }
        }
        else {
            first->next = second;
            second = second->next;
            first = first->next;
        }
    }
    return head;
}
#endif
