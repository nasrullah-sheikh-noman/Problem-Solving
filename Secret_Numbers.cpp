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
  int len = s.length();
  for(int i = 0; i < len; i++) {
    if(int(s[i]) >= 48 && s[i] <= 57) {
      cout << s[i] ;
    }
  }

  return 0;
}