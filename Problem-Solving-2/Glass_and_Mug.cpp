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

  int n, g, m; cin >> n >> g >> m;
  int gl = 0, mg = 0;
  for(int i = 0; i < n; i++) {
    if(gl == g) {
      gl = 0;
    } else if (mg == 0) {
      mg = m;
    } else {
      int e = g - gl;
      if(e >= mg) {
        gl+=mg;
        mg = 0;
      } else {
        mg-=e;
        gl=g;
      }
    }
  }
  cout << gl << " " << mg << endl;
  return 0;
}