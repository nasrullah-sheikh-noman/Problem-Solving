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
    int a, b, k; cin >> a >> b >> k;
    int cnt1 = 0;
    while(a != b) {
      if(abs(a-b) >= k) {
        if(a>b) {
          while(((a-b)+k-1) >= k) {
          a/=k;
          cnt1++;
          }
        } else {
          while(((b-a)+k-1) >= k) {
            b/=k;
            cnt1++;
          }
        }
      } else {
        int r = abs(a-b);
        if(a>b) {
          b+=r;
          cnt1+=r;
        } else {
          a+=r;
          cnt1+=r;
        }
      }
    }
    cout << cnt1 << endl;
  }

  return 0;
}