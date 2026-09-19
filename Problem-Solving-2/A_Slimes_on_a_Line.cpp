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
    int minV = INT_MAX;
    int maxV = INT_MIN;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      minV = min(x, minV);
      maxV = max(x, maxV);
    }                     
    cout << (maxV - minV + 1)/2 << endl;
  }

  return 0;
}