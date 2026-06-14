// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define endl "\n" 
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, m; cin >> n >> k >> m;
  int sum = 0;
  for(int i =1; i <= n-1; i++) {
    int x; cin >> x;
    sum+=x;
  }
  int r = m*n;
  int res = r - sum;
  if(sum >= r) {
    cout << "0\n";
  }
  else if(res > 0 && res <= k) {
    cout << res << endl;
  } else cout << "-1\n";

  return 0;
}