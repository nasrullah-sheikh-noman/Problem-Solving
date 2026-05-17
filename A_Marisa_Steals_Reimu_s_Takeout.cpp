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

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++) {
      int w;
      cin >> w;
      if(w == 0) c0++;
      else if (w == 1) c1++;
      else c2++;
    }
    int ans = c0;
    int pairs = min(c1, c2);
    ans+=pairs;
    c1-=pairs;
    c2-=pairs;
    ans+=c1/3+c2/3;
    cout << ans << endl;
  }
  return 0;
}