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
    int n; 
    cin >> n;
    int cnt = 0;
    for(int x = 1; ; x++) {
      if(x%3 != 0 && x%10 != 3) {
        cnt++;
        if(cnt == n) {
          cout << x << endl;
          break;
        }
      }
    }
  }

  return 0;
}