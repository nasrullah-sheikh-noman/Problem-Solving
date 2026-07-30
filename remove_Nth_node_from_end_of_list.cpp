// Remove Nth Node From End of List

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
        int size(ListNode* tmp) {
          int cnt = 0;
          while(tmp != NULL) {
            cnt++;
            tmp = tmp->next;
          }
          return cnt;
        }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = size(head);
        int idx = sz - n;
        if(idx==0) {
          head = head->next;
          return head;
        }
        ListNode *tmp = head;
        for (int i = 1; i < idx; i++) {
          tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        return head;
    }
};