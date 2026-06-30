// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define i8 __int128_t
#define ui8 __uint128_t
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define ul unsigned ll
#define vu vc<ul>
#define endl "\n" 
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
using namespace std;

class Node {
  public:
    int val;
    Node* next;
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node* &head, int val) {
  Node* newNode = new Node(val);
  if(head == NULL) {
    head = newNode;
    return;
  }
  Node* temp = head;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void print_linked_list(Node* head) {
  Node* temp = head;
  while(temp!=NULL) {
    cout << temp->val << endl;
    temp = temp->next;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Node* head = new Node(10);
  // Node* a = new Node(20);
  // Node* b = new Node(30);

  // head->next = a;
  // a->next = b;
  Node* head = NULL;

  insert_at_tail(head, 40);
  insert_at_tail(head,50);
  insert_at_tail(head,60);

  print_linked_list(head);

  return 0;
}