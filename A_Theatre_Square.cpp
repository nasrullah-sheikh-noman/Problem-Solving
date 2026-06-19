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

  int n, m, a; cin >> n >> m >> a;
  ll rows = (n+a-1)/a;
  ll cols = (m+a-1)/a;
  cout << rows*cols << endl;
  return 0;
}