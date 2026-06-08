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

  char c; cin >> c;
  int ans = (int)c;
  if(ans >= 48 && ans <= 57) {
    cout << "IS DIGIT\n";
  } else if(ans >=  65 && ans <= 90) {
    cout << "ALPHA\n";
    cout << "IS CAPITAL\n";
  } else if(ans >= 97 && ans <= 122) {
    cout << "ALPHA\n";
    cout << "IS SMALL\n";
  }

  return 0;
}