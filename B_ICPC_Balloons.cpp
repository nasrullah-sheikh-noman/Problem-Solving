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
    map<char, int> mp;
    int ans = 0;
    for(char c : s) {
      if(mp[c] == 0) {
        ans+=2;
      }else ans++;
      mp[c]++;
    }
    
    cout << ans << endl;
  }

  return 0;
}