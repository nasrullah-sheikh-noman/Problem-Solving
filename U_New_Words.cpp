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

  string s; cin >> s;
  int e = 0, g = 0, y = 0, p = 0, t = 0;

  for(auto c : s) {
    if(c == 'e' || c == 'E') {
      e++;
    } else if(c == 'g' || c == 'G') {
      g++;
    }
    else if(c == 'y' || c == 'Y') {
      y++;
    }
     else if(c == 'p' || c == 'P') {
      p++;
    }
    else if(c == 't' || c == 'T') {
      t++;
    }
  }
  cout << min(e, min(g, min(y, min(p, t)))) << endl;

  return 0;
}