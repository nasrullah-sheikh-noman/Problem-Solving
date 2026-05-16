// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define yes cout << \"YES\" << endl; 
#define no cout << \"NO\" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  ll cnt = 0;
  int n = s.size();
  for(int i = 0; i < n; i++) {
    if(s[i] == 'C'){
      cnt+=min(i, n-i-1)+1;
    }
  }
  cout << cnt << endl;

  return 0;
}