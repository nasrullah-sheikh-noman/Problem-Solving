// Node structure used:
// struct Node {
//     int val;
//     Node* next;
//     Node(int x) : val(x), next(NULL) {}
// };

bool isPalindrome(Node* head) {
    //write code here...
    if(!head || !head->next) return true;
    Node *slow = head, *fast = head;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *prev = NULL, *curr = slow;
    while(curr) {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    Node *first = head, *second = prev;
    while(second) {
        if(first->val != second->val) return false;
        first = first->next;
        second = second->next;
    }
    return true;
    
}
