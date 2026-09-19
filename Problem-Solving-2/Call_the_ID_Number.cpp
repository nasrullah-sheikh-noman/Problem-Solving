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

  int n; cin >> n;
  int arr[n+1];
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  int arr2[n+1];
  for(int i = 1; i <= n; i++) {
    arr2[i] = 0;
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    if(arr2[i] == 0) {
      arr2[arr[i]] = 1;
    }
  }
  for(int i = 1; i <= n; i++) {
    if(arr2[i]==0) cnt++;
  }
  cout << cnt << endl;
  for(int i = 1; i <= n; i++) {
    if(arr2[i]== 0) {
      cout << i << " ";
    }
  }
  

  return 0;
}