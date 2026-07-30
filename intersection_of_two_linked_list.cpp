// Intersection of two linked list

// O(n*m)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmpa = headA;
        ListNode *tmpb = headB;

        while(tmpa!=NULL) {
          tmpb = headB;
          while(tmpb!=NULL) {
            if(tmpa == tmpb) {
              return tmpa;
            }
            tmpb = tmpb->next;
          }
          tmpa = tmpa->next;
        }
        return NULL;
    }
};

// O(n+m)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
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
    }
};