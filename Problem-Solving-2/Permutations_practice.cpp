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

  int n; cin >> n;
  if(n == 2 || n == 3) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  for(int i = 2; i <= n; i+=2) {
    cout << i << " " ;
  }
  for(int i = 1; i <= n; i+=2) {
    cout << i << " " ;
  }
  
  return 0;
}