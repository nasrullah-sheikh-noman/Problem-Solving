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

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vc<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int mn = *min_element(v.begin(), v.end());
    int cnt = count(v.begin(), v.end(), mn);
    if(cnt >= 2) {
      yes
    } else no
  }

  return 0;
}