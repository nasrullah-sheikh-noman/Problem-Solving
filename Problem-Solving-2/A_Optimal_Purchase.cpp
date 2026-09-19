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
    ll n, a, b;
    cin >> n >> a >> b;
    ll v = n/3;
    ll m = n % 3;
    ll sum = a*n;
    sum = min(sum, ((v*b)+(m*a)));
    if(m > 0) {
      sum = min(sum, (v+1)*b);
    }
    cout << sum << endl;
  }

  return 0;
}