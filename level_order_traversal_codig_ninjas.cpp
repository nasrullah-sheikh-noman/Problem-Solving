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
    Node *left;
    Node *right;
  Node(int val) {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node* intput_tree() {
  int val;
  cin >> val;
  Node *root;
  if(val==-1)
    root = NULL;
  else
    root = new Node(val);
  queue<Node *> q;
  if(root)
    q.push(root);
  while(!q.empty()) {
    Node* p = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;
    if(l==-1)
      p->left = NULL;
    else {
      p->left = new Node(l);
      q.push(p->left);
    }
    if(r==-1)
      p->right = NULL;
    else {
      p->right = new Node(r);
      q.push(p->right);
    }
  }
  return root;
}

void level_order_traversal(Node* root) {
  if(root==NULL)
    return;
  queue<Node*> q;
  q.push(root);
  while(!q.empty()) {
    Node* p = q.front();
    q.pop();
    cout << p->val << " ";
    if(p->left) q.push(p->left);
    if(p->right)
      q.push(p->right);
  }
  cout << nl;
}

void solve() {
  Node* root= intput_tree();
  level_order_traversal(root);
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}