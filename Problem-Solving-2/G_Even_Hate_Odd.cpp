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
    int n; cin >> n;
    int arr[n];
    int odd = 0;
    int even = 0;
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      arr[i]%2 == 0 ? even++ : odd++;
    }
    if(n%2 == 1) {
      cout << "-1\n";
    }else cout << abs(odd-even)/2 << endl;
  }

  return 0;
}