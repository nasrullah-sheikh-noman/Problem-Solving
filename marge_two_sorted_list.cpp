// Marge Two Sorted List

if(list1==NULL) return list2;
if(list2==NULL)
  return list1;

listNode *head = head;
ListNode *tmp1 = list1;
ListNode *tmp2 = list2;
if(tmp1->val < tmp2->val) {
  head = tmp1->val;
  tmp1 = tmp1->next;
} else {
  head = tmp2->val;
  tmp2 = tmp2->next;
}
ListNode *cur = head;
while(tmp1 != NULL && tmp2 != NULL) {
  if(tmp1->val < tmp2->val) {
    cur->next = tmp1;
    tmp1 = tmp1->next;
  } else {
    cur->next = tmp2;
    tmp2 = tmp2->next;
  }
  cur = cur->next;
}
if(tmp1!=NULL) {
  cur->next = tmp1;
}
if(tmp2 != NULL)
  cur->next = tmp2;