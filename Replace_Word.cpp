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
    string s1, s2; cin >> s1 >> s2;
    int n = s2.length();
    for(int i = 0; i < (int)s1.size(); i++) {
      if(s1.substr(i,n) == s2 && i+n <= s1.size()) {
        s1.replace(i, n, "#");
      }
    }
    cout << s1 << endl;
  }

  return 0;
}