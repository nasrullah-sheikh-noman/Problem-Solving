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
    ListNode* reverseKGroup(ListNode* head, int k) {
      ListNode* tmp = head;
      int cnt = 0;
      while(cnt<k) {
        if(tmp==NULL) return head;
        tmp=tmp->next;
        cnt++;
      }
      ListNode* newhead = reverseKGroup(tmp, k);
      tmp = head, cnt = 0;
      while(cnt<k) {
        ListNode* next = tmp->next;
        tmp->next = newhead;
        newhead = tmp;
        tmp = next;
        cnt++;
      }
      return newhead;
    }
};