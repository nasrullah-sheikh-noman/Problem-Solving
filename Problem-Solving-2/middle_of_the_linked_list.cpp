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
    ListNode* middleNode(ListNode* head) {
      if(head->next==NULL) return head;
      int cnt = 0;
      ListNode* tmp = head;
      while(tmp!=NULL) {
        cnt++;
        tmp=tmp->next;
      }
      int cnt2 = 0;
      if(cnt%2==0) {
        while(1) {
          head=head->next;
          cnt2++;
          if(cnt2==((cnt+1)/2)) return head;
        }
      } else {
        while(1) {
          head=head->next;
          cnt2++;
          if(cnt2==(cnt/2)) return head;
        }
      }
    }
};