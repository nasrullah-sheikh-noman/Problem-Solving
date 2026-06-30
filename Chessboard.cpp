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

  string arr[8];
  for(int i = 0; i < 8; i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(arr[i][j] == '*') {
        cout << char(97+j) << 8-i << endl;
        break;
      }
    }
  }

  return 0;
}