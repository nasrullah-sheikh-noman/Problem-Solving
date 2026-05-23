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

  int n, q;
  cin >> n >> q;
  vc<int> v(n+1, 0);
  int dec = 0;
  multiset<int> st;
  for(int i = 0; i < n; i++) {
    st.insert(0);
  }
  while(q--) {
    int t;
    cin >> t;
    if(t == 1) {
      int x;
      cin >> x;
      st.erase(st.find(v[x]));
      v[x]++;
      st.insert(v[x]);
      int mn = *st.begin();
      if(mn > dec) {
        dec++;
      }
    }
    else {
      int y;
      cin >> y;
      int need = y + dec;
      int cnt = 0;
      for(int i = 0; i <= n; i++) {
        if(v[i] >= need) {
          cnt++;
        }
      }
      cout << cnt << endl;
    }
  }

  return 0;
}