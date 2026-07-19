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
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val) {
      ListNode* newNode = new ListNode(val);
      if(head==NULL) {
        head = newNode;
        tail = newNode;
        return;
      }
      tail->next = newNode;
      tail = newNode;
    }
    void reverse(ListNode* &head, ListNode* tmp) {
      if(tmp->next==NULL) {
        head = tmp;
        return;
      }
      reverse(head, tmp->next);
      tmp->next->next = tmp;
      tmp->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
      ListNode* newHead = NULL;
      ListNode* newTail = NULL;
      ListNode* tmp = head;
      while(tmp!=NULL) {
        insert_at_tail(newHead, newTail, tmp->val);
        tmp=tmp->next;
      }
      reverse(newHead, newHead);
      tmp = newHead;
      while(tmp!=NULL) {
        if(tmp->val!=head->val) return false;
        tmp=tmp->next;
        head=head->next;
      }
      return true;
    }
};