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

void check_duplicate_in_singly_list(Node* head) {
  set<int> st;
  Node* tmp = head;
  while(tmp != NULL) {
    if(st.count(tmp->val)) {
      yes;
      return;
    }
    st.insert(tmp->val);
    tmp = tmp->next;
  }
  no
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Node* head = new Node(10);  
  Node* a = new Node(20);  
  Node* b = new Node(30);
  Node* c = new Node(40);
  Node* d = new Node(40);
  
  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;

  check_duplicate_in_singly_list(head);

  return 0;
}