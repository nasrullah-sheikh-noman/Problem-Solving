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

  string s; getline(cin, s);
  stringstream ss(s);
  string word;
  while(ss >> word) {
    if(word == "Jessica") {
      cout << "YES\n"; 
      return 0;
    } 
  }
  cout << "NO\n";
  return 0;
}