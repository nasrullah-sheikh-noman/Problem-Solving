// Marge Nodes In Between Zeros

head = head->next;
ListNode *tmp = head;
ListNode *tmp2 = head;
int sum = 0;

while(1) {
  if(tmp2->val==0) {
    tmp->val = sum;
    sum = 0;
    if(tmp2->next == NULL) {
      tmp->next = NULL;
      break;
    }
    tmp = tmp->next;
  } else {
    sum += tmp2->val;
  }
  tmp2 = tmp2->next;
}
return head;