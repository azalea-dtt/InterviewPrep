 ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for (auto list: lists) {
            while (list != nullptr) {
                minHeap.push(list->val);
                list = list->next;
            }
        }
        ListNode *temp = new ListNode(-1);
        ListNode *newList = temp;
        while (!minHeap.empty())
        {
            temp->next = new ListNode (minHeap.top());
            minHeap.pop();
            temp = temp->next;
        }
        newList = newList->next;
        return newList;
    }