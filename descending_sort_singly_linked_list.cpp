// Starting with the name of Almighty Allah
// Practice in the only shortcut  to improve
#include <bits/stdc++.h>
#define ll long long
#define i8 __int128_t
#define ui8 __uint128_t
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define F first
#define S second
#define nl '\n'
#define cinv(v) for(auto &x: v) cin >> x;
#define coutv(v) for(auto &x: v) cout << x << endl;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp(x, y) make_pair(x, y)
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define ld long double
#define ul unsigned ll
#define vu vc<ul>
#define mod 1000000007
#define endl "\n" 
#define gcd(a, b) __gcd(a, b)
#define lcd(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
const int N = 1e5;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r) {
  return uniform_int_distribution<int>(l, r)(rng);
}

class Node {
  public: 
    int val;
    Node* next;
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};

void insert_new_node(Node* &head, Node* &tail, int val) {
  Node* newNode = new Node(val);
  if(head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;

}

void descending_sort(Node* head, Node* tail) {
  for(Node* i = head; i != NULL; i = i->next) {
    Node* mx = i;
    for(Node* j = i->next; j != NULL; j = j->next) {
      if(j->val > mx->val) mx = j;
    }
    swap(mx->val, i->val);
  }
}

void print_singly_linked_list(Node* head) {
  Node* tmp = head;
  while(tmp != NULL) {
    cout << tmp->val << endl;
    tmp = tmp->next;
  }
}

void solve() {
  Node* head = NULL;
  Node* tail = NULL;
  while(1) {
    int x; cin >> x;
    if(x == -1) break;
    insert_new_node(head, tail, x);
  }
  descending_sort(head, tail);
  print_singly_linked_list(head);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--) {
  // cout << "Case : " << t << " ";
    solve();
 
  }

  return 0;
}