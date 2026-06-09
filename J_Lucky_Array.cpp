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

  int n; cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int mn = arr[0];
  for(int i = 0; i < n; i++) {
    mn = min(mn, arr[i]);
  }
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] == mn) cnt++;
  }
  if(cnt%2 == 1) {
    cout << "Lucky\n";
  } else cout << "Unlucky\n";
  return 0;
}