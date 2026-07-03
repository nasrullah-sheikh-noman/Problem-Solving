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

void insert_new_node_at_head(Node* &head, Node* &tail, int val, int &cnt) {
  Node* newNode = new Node(val);
  if(head == NULL) {
    head = newNode;
    tail = newNode;
    cnt++;
    return;
  }
  newNode->next = head;
  head = newNode;
  cnt++;
}

void insert_new_value_at_tail(Node* &head, Node* &tail, int val, int &cnt) {
  Node* newNode = new Node(val);
  if(head == NULL) {
    head = newNode;
    tail = newNode;
    cnt++;
    return;
  }
  tail->next = newNode;
  tail = newNode;
  cnt++;
}

void delete_node(Node* &head, Node* &tail, int v, int &cnt) {
  if(v>=cnt) return;
  if(v == 0) {
    Node* del = head;
    head = head->next;
    delete del;
    cnt--;
    if(head == NULL) tail = NULL;
    return;
  }
  Node* tmp = head;
  for(int i = 0; i < v-1; i++) tmp = tmp->next;
  Node* del = tmp->next;
  tmp->next = del->next;
  if(del == tail) tail = tmp;
  delete del;
  cnt--;
}

void print_linked_list(Node* head) {
  Node* tmp = head;
  while(tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

void solve() {
  Node* head = NULL;
  Node* tail = NULL;
  int q; cin >> q;
  int cnt = 0;
  while(q--) {
    int x, v; cin >> x >> v;
    if(x == 0) {
      insert_new_node_at_head(head, tail, v, cnt);
    } else if(x == 1) {
      insert_new_value_at_tail(head, tail, v, cnt);
    } else if(x == 2) {
      delete_node(head, tail, v, cnt);
    }
    print_linked_list(head);
  }
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