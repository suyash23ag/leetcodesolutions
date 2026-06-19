if(!head || !head->next) return head;
ListNode* second = head->next;
head->next = swappPairs(second->next);
second->next = head;
return second;
