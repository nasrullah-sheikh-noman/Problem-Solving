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

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Node* head = new Node(5);
  Node* a = new Node(7);
  Node* b = new Node(1);
  Node* c = new Node(14);
  Node* d = new Node(3);
  Node* e = new Node(11);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;

  Node* temp = head;
  int sum = 0;
  while(temp!=NULL) {
    cout << temp->val << endl;
    cout << "merory address : " << temp << endl;
    sum+=temp->val;
    temp = temp->next;
  }
  cout << "Sum : " << sum << endl;
  return 0;
}