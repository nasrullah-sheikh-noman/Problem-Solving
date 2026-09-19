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

  int n, p, q, r, s; cin >> n >> p >> q >> r >> s;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for(int i = p; i <= q; i++) {
    swap(arr[i-1], arr[r-1]);
    r++;
  }
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}