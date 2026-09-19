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

void middle_element(Node* slow, Node* fast) {
  Node* prev = NULL;
  while(fast && fast->next) {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  if(fast == NULL) {
    cout << prev->val << " " << slow->val << endl;
  } else cout << slow->val << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);

  head->next = a;
  a->next = b;
  b->next = c;

  Node* slow = head;
  Node* fast = head;

  middle_element(slow, fast);

  return 0;
}