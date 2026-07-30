// Swap Nodes In Pair


/// Value swap
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      if(head==NULL || head->next==NULL)
        return head;
      ListNode *first = head;
      ListNode *second = head->next;
      while(first!=NULL && second!=NULL) {
        swap(first->val, second->val);
        first = second->next;
        if(first) {
          second = first->next;
        } else second = NULL;
      }
      return head;
    }
};

// Node swap
/**
 * Definition for sing  l   y-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullpt r) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      if(head==NULL || head->next==NULL)
        return head;
      ListNode *first = head;
      ListNode *second = head->next;
      ListNode *prev = NULL;
      head = head->next;
      while(first!=NULL && second!=NULL) {
        first->next = second->next;
        second->next = first;
        if(prev!=NULL)
          prev->next = second;
        prev = first;
        first = first->next;
        if(first) {
          second = first->next;
        } else second = NULL;
      }
      return head;
    }
};