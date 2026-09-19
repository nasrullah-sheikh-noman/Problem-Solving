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
  while(n--) {
    string s; cin >> s;
    int f1 = s[0] - 47;
    int f2 = s[1] - 47;
    int f3 = s[2] - 47;
    int f = f1 + f2 + f3;
    int l1 = s[s.size()-1] - 47;
    int l2 = s[s.size()-2] - 47;
    int l3 = s[s.size()-3] - 47;
    int l = l1 + l2 + l3;
    if(f == l ) {
      cout << "YES\n";
    } else cout << "NO\n";
  }
  return 0;
}