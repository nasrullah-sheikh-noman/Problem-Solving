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

int sixseven(vc<int>& v){
  int n = v.size();
  vc<int> c = v;
  sort(c.begin(), c.end());
  c.erase(unique(c.begin(),c.end()), c.end());
  int m = c.size();
  for(int i = 0; i < m-1; i++) {
    c.push_back((c[i]+c[i+1])/2+1);
  }
  c.push_back(v[0]-1);
  c.push_back(v[n-1]+1);
  int best = INT_MAX;
  for(int t : c) {
    int l = 0, r = 0;
    for(int x : v) {
      if(x < t) l++;
      else if ( x > t) r++;
    }
    best = min(best, max(r,l));
  }
  return best;
}

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
    for(int& x : v) cin >> x;
    cout << sixseven(v) << endl;
  }
}