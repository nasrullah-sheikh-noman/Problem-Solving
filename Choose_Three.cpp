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

  int t; cin >> t;
  while(t--) {
    int n, s; cin >> n >> s;
    int arr[n];
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int ans = 1; 
    for(int i = 0; i < n-2; i++) {
      for(int j = i+1; j < n-1; j++) {
        for(int k = j+1; k < n; k++) {
          if(arr[i] + arr[j] + arr[k] == s) {
            cout << "YES\n";
            ans = 0;
            break;
          }
        }
        if(ans == 0) break;
      }
      if(ans == 0) break;
    }
    if(ans == 1) cout << "NO\n";
  }

  return 0;
}