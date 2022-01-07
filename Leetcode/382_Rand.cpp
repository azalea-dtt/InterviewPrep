#include "Header.h"
#if TEST382
class Solution {
public:
    Solution(ListNode* head) {
        this->head = head;
        ListNode* tmp = head;
        len = 0;
        while (tmp != nullptr)
        {
            tmp = tmp->next;
            len++;
        }
    }

    int getRandom() {
        int randNum = rand() % len;
        ListNode* tmp = head;
        while (randNum)
        {
            tmp = tmp->next;
            randNum--;
        }
        return tmp->val;
    }
private:
    int len;
    ListNode* head;
};

#endif