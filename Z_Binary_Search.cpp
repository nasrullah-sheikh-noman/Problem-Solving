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

  int n, k; cin >> n >> k;
  vl A(n);
  for(int i = 0; i < n; i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  while(k--) {
    int x; cin >> x;
    if(binary_search(A.begin(),A.end(), x)) {
      cout << "found\n";
    } else cout << "not found\n";
  }

  return 0;
}