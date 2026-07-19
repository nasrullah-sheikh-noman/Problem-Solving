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
    void reverse_linked_list(ListNode* &head, ListNode* tmp) {
      if(tmp->next==NULL) {
        head = tmp;
        return;
      }
      reverse_linked_list(head, tmp->next);
      tmp->next->next = tmp;
      tmp->next = NULL;
    }
    ListNode* reverseList(ListNode* head) {
      if(head==NULL) return head;
      reverse_linked_list(head, head);
      return head;
    }
};