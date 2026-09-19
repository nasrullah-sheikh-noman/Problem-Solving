// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
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
  vi v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for(int i = 0; i < n-1; i++) {
    if(v[i]>v[i+1]) {
      int l = v[i], r = v[i+1];
      while(l>r) {
        cout << l << " ";
        l--;
      }
    } else if(v[i]<v[i+1]) {
      int l = v[i], r = v[i+1];
      while(l<r) {
        cout << l << " ";
        l++;
      }
    }
  }
  cout << v[n-1] << endl;
  return 0;
}