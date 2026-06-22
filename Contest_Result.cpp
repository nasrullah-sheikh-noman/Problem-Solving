// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
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

  int n, m; cin >> n >> m;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int sum = 0;
  for(int i = 0; i < m; i++){
    int x; cin >> x;
    sum+=arr[x-1];
  }
  cout << sum << endl;

  return 0;
}