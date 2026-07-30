// Intersection of two linked list

// O(n*m)
ListNode *tmpa = headA;
ListNode *tmpb = headB;

while(tmpa!=NULL) {
  while(tmpb!=NULL) {
    if(tmpa == tmpb) {
      return tmpa->val;
    }
    tmpb = tmpb->next;
  }
  tmpa = tmpa->next;
}
return NULL;

// O(n+m)
ListNode *tmpa = headA;
ListNode *tmpb = headB;

while(tmpa!=tmpb) {
  if(tmpa==NULL) {
    tmpa = headB;
  } else tmpa = tmpa->next;
  if(tmpb==NULL) {
    tmpb = headA;
  } else tmpb = tmpb->next;
}
return tmpa;