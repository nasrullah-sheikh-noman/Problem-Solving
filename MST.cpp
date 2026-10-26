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

class Edge {
  public:
    int a, b, c;
    Edge(int a, int b, int c) {
      this->a = a;
      this->b = b;
      this->c = c;
    }
};

bool cmp(Edge a, Edge b) {
  return a.c < b.c;
}

int par[1001];
int group_size[1001];

int find(int node) {
  if(par[node]==-1)
    return node;
  int leader = find(par[node]);
  par[node] = leader;
  return leader;
}

void DSU_union(int node1, int node2) {
  int leader1 = find(node1);
  int leader2 = find(node2);
  if(group_size[leader1]>=group_size[leader2]) {
    par[leader2] = leader1;
    group_size[leader1] += group_size[leader2];
  } else {
    par[leader1] = leader2;
    group_size[leader2] += group_size[leader1];
  }
}

void solve() {
  int n, i, j, k, e, x, p, q, m, l, r;
  memset(par, -1, sizeof(par));
  fill(group_size, group_size+1001, 1);
  cin >> n >> e;
  vector<Edge> edge_list;
  while(e--) {
    int a, b, c;
    cin >> a >> b >> c;
    edge_list.push_back(Edge(a, b, c));
  }
  sort(edge_list.begin(), edge_list.end(), cmp);
  int total_cost = 0;
  for(auto ed: edge_list) {
    int par1 = find(ed.a);
    int par2 = find(ed.b);
    if(par1 != par2) {
      DSU_union(ed.a, ed.b);
      total_cost += ed.c;
    }
  }
  cout << total_cost << endl;
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