// Marge Nodes In Between Zeros

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
    ListNode* mergeNodes(ListNode* head) {
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
    }
};