// Starting with the name of Almighty Allah
// Practice is the only shortcut to improve

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

//==================== TYPE ALIASES ====================//
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using i8 = __int128_t;
using ui8 = __uint128_t;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

template<typename T>
using vc = vector<T>;

using vi = vc<int>;
using vl = vc<ll>;
using vpi = vc<pii>;
using vpl = vc<pll>;

//==================== CONSTANTS ====================//
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1000000007;
const ld PI = acosl(-1.0L);

//==================== MACROS ====================//
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define srt(v) sort(all(v))
#define rsrt(v) sort(rall(v))
#define rvs(v) reverse(all(v))
#define sz(x) (int)((x).size())
#define nl '\n'
#define cinv(v) for(auto &x : (v)) cin >> x
#define coutv(v) for(auto &x : (v)) cout << x << ' '; cout << nl
#define coutvl(v) for(auto &x : (v)) cout << x << nl
#define Yes cout << "YES" << nl
#define No cout << "NO" << nl
#define yes cout << "Yes" << nl
#define no cout << "No" << nl

//==================== FUNCTIONS ====================//
template<typename T>
T gcd(T a, T b) {
  while (b) {
    T t = a % b;
    a = b;
    b = t;
  }
  return a;
}

template<typename T>
T lcm(T a, T b) {
  return a / gcd(a, b) * b;
}

template<typename T>
bool ckmin(T &a, T b) {
  if (b < a) {
    a = b;
    return true;
  }
  return false;
}

template<typename T>
bool ckmax(T &a, T b) {
  if (b > a) {
    a = b;
    return true;
  }
  return false;
}

//==================== RANDOM ====================//
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int my_rand(int l, int r) {
  return uniform_int_distribution<int>(l, r)(rng);
}

class Node {
  public: 
    int val;
    Node* next;
    Node *prev;
    Node(int val)
    {
      this->val = val;
      this->next = NULL;
      this->prev = NULL;
    }
};

int getSize(Node* head) {
  int cnt = 0;
  while(head!=NULL) {
    cnt++;
    head = head->next;
  }
  return cnt;
}

void insertAtHead(Node* &head, Node* &tail, int val) {
  Node *newNode = new Node(val);
  if(head==NULL) {
    head = tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int val) {
  Node *newNode = new Node(val);
  if(head==NULL) {
    head = tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}

void insertAtAnyPos(Node* head, int x, int val) {
  Node *tmp = head;
  for (int i = 0; i < x -1; i++) {
    tmp = tmp->next;
  }
  Node *newNode = new Node(val);
  newNode->next = tmp->next;
  newNode->prev = tmp;
  tmp->next->prev = newNode;
  tmp->next = newNode;
}

void printLeft(Node* head) {
  cout << "L -> ";
  Node *tmp = head;
  while(tmp!=NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << nl;
}

void printRight(Node* tail) {
  cout << "R -> ";
  Node *tmp = tail;
  while(tmp!=NULL) {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
  cout << nl;
}

void solve() {
  Node *head = NULL;
  Node *tail = NULL;
  int q;
  cin >> q;
  while(q--) {
    int x, v;
    cin >> x >> v;
    int sz = getSize(head);
    if(x<0||x>sz) {
      cout << "Invalid\n";
      continue;
    }
    if(x==0)
      insertAtHead(head, tail, v);
    else if(x==sz) {
      insertAtTail(head, tail, v);
    } else {
      insertAtAnyPos(head, x, v);
    }
    printLeft(head);
    printRight(tail);
  }
  
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}