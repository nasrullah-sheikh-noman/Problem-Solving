// Swap Nodes In Pair


/// Value swap
if(head==NULL && head->next==NULL)
  return head;
ListNode *first = head;
ListNode *second = head->next;
while(first!=NULL && second!=NULL) {
  swap(first->val, second->val);
  first = first->next;
  second = second->next;
}
return head;

// Node swap
if(head==NULL && head->next==NULL)
  return head;
ListNode *first = head;
ListNode *second = head->next;
ListNode *prev = NULL;
head = head->next;
while(first!=NULL && second!=NULL) {
  first->next = second->next;
  second->next = first;
  if(prev!=NULL)
    prev->next = second;
  prev = first;
  first = first->next;
  second = first->next;
}
return head;