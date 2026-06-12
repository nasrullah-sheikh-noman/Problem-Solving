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

  string s;
  getline(cin, s);
  string w; cin >> w;
  stringstream ss(s);
  string word;
  int cnt = 0;
  while(ss >> word) {
    if(word == w) cnt++;
  }
  cout << cnt << endl;
  return 0;
}