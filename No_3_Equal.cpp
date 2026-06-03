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
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i++) {
      int j = i;
      while(j < n && s[j] == s[i])
        j++;
      ans+=(j-i)/3;
      i = j-1;
    }
    cout << ans << endl;
  }

  return 0;
}