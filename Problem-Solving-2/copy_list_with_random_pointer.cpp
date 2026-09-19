/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      if(head==NULL) return NULL;
      unordered_map<Node*, Node*> mp;
      Node* newhead = new Node(head->val);
      mp[head] = newhead;
      Node* tmp1 = head->next;
      Node* tmp2 = newhead;
      while(tmp1!=NULL) {
        Node* cpy = new Node(tmp1->val);
        tmp2->next = cpy;
        mp[tmp1] = cpy;
        tmp1= tmp1->next;
        tmp2 = tmp2->next;
      }
      tmp1 = head;
      tmp2 = newhead;
      while(tmp1!=NULL) {
        if(tmp1->random!=NULL)
          tmp2->random = mp[tmp1->random];
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
      }
      return newhead;
    }
};