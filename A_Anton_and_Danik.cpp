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
  string s; cin >> s;
  int a = 0, d = 0;
  for(char c : s) {
    if(c == 'A') {
      a++;
    } else if(c == 'D') d++;
  }
  if(a == d) {
    cout << "Friendship\n";
  } else if(a > d) {
    cout << "Anton\n";
  } else cout << "Danik\n";
  return 0;
}