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

  ll n; cin >> n;
  if(n <= pow(10,3)-1) cout << n << endl;
  else if (n <= pow(10,4)-1) cout << n-(n%10) << endl;
  else if (n <= pow(10,5)-1) cout << n-(n%100) << endl;
  else if (n <= pow(10,6)-1) cout << n-(n%1000) << endl;
  else if (n <= pow(10,7)-1) cout << n-(n%10000) << endl;
  else if (n <= pow(10,8)-1) cout << n-(n%100000)  << endl;
  else if (n <= pow(10,9)-1) cout << n-(n%1000000)  << endl;

  return 0;
}