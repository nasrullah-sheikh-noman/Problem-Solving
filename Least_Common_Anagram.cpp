// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define i8 __int128_t
#define ui8 __uint128_t
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define ul unsigned ll
#define vu vc<ul>
#define endl "\n" 
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vi mn(26, 1000000);
  for(int i = 0; i < n; i++) {
    string s; cin >> s;
    vi cnt(26, 0);
    for(char c: s) {
      cnt[c - 'a']++;
    }
    for(int j = 0; j < 26; j++) {
      mn[j] = min(mn[j], cnt[j]);
    }
  }
  string ans;
  for(int i = 0; i < 25; i++) {
    ans.append(mn[i], char('a'+i));
  }
  if(ans.empty()) {
    cout << "no such string\n";
  } else cout << ans << endl;
  return 0;
}