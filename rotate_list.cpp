/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
      if(!head || !head->next || k == 0) return head;
      int n = 1;
      ListNode* tmp = head;
      while(tmp->next) {
        tmp = tmp->next;
        n++;
      }
      k = k%n;
      if(k==0) return head;
      tmp->next = head;
      int steps = n- k;
      ListNode* newtmp = head;
      while(--steps) {
        newtmp = newtmp->next;
      }
      ListNode* res = newtmp->next;
      newtmp->next = nullptr;
      return res;
    }
};