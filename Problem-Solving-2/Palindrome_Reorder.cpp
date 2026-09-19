// Starting with the name of Almighty Allah
// Practice in the only shortcut to improve
#include <bits/stdc++.h>
#define ll long long
#define i8 __int128_t
#define ui8 __uint128_t
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define F first
#define S second
#define nl '\n'
#define cinv(v) for(auto &x: v) cin >> x;
#define coutvl(v) for(auto &x: v) cout << x << nl;
#define coutv(v) for(auto &x: v) cout << x << " "; cout << nl; 
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp(x, y) make_pair(x, y)
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define ld long double
#define ul unsigned ll
#define vu vc<ul>
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcd(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define yes cout << "Yes" << nl; 
#define Yes cout << "YES" << nl; 
#define no cout << "No" << nl; 
#define No cout << "NO" << nl; 
const int N = 1e5;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r) {
  return uniform_int_distribution<int>(l, r)(rng);
}

void solve() {
  string s; cin >> s;
  int n = s.length();
  vi v(26, 0);
  for(int i = 0; i < n; i++) {
    v[s[i]-'A']++;
  }
  int even = 0; int odd = 0;
  for(int i = 0; i < 26; i++) {
    if(v[i]!=0) {
      if(v[i]%2==0) even++;
      if(v[i]%2==1) odd++;
    }
  }
  sort(s.begin(), s.end());
  if(odd>1) {
    cout << "NO SOLUTION\n";
    return;
  } else {
    if(odd==0) {
      for(int i = 0; i < n-1; i+=2) {
        cout << s[i];
      } 
      for(int i = n-1; i >= 0; i-=2) {
        cout << s[i];
      }
    } else {
      char ch = '.';
      for(int i = 0; i < 26; i++) {
        if(v[i]%2==1) {
          ch = char(i+'A');
        }
      }
      if(ch!='.') {
        for(int i = 0; i < 26; i++) {
          int l = v[i];
          for(int j = 0; j < l; j+=2) {
            if(char(i+'A')!=ch) cout << char(i+'A');
          }
        }
        for(int i = 0; i < n; i++) {
          if(s[i]==ch) cout << s[i];
        }
        for(int i = 25; i >= 0; i--) {
          int l = v[i];
          for(int j = 0; j < l; j+=2) {
            if(char(i+'A')!=ch) cout << char(i+'A');
          }
        }
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--) {
  // cout << "Case : " << t << " ";
    solve();
 
  }

  return 0;
}