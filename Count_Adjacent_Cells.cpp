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

  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      int cnt = 0;
      if(i > 1) cnt++;
      if(i < n) cnt++;
      if(j > 1) cnt++;
      if(j < m) cnt++;
      cout << cnt << " ";
    }
    cout << endl;
  }

  return 0;
}