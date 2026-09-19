#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

long long power(long long base, long long exp) {
  long long res = 1;
  base%=mod;
  while(exp>0) {
    if(exp % 2 == 1) res = (res * base) % mod;
    base = (base * base) % mod;
    exp/=2;
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  if(!(cin >> n >> m)) return 0;
  map<int, vector<int>> counts;
  for(int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int a;
      cin >> a;
      if(counts.find(a) == counts.end()) {
        counts[a].assign(n, 0);
      }
      counts[a][i]++;
    }
  }

  long long ans = 0;
  long long total = power(m, n);

  for (auto const& [val, row_counts] : counts) {
    long long not_parsent_ways = 1;
    for(int i = 0; i < n; i++) {
      int count_in_the_row = row_counts[i];
      not_parsent_ways = (not_parsent_ways* (m - count_in_the_row) % mod );
    }
    long long present_ways = (total - not_parsent_ways + mod) % mod;
    ans = (ans + present_ways) % mod;
  }
  cout << ans << endl;

  return 0;
}