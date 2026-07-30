// Remove Nth Node From End of List

int size(ListNode* tmp) {
  int cnt = 0;
  while(tmp != NULL) {
    cnt++;
    tmp = tmp->next;
  }
  return cnt;
}

int sz = size(head);
int idx = sz - n;
if(idx==0) {
  head = head.next;
  return head;
}
ListNode *tmp = head;
for (int i = 1; i < idx; i++) {
  tmp = tmp.next;
}
tmp.next = tmp.next->next;
return head;