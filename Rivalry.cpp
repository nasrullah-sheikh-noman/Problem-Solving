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

  int a, b, c, d; cin >> a >> b >> c >> d;
  int D = c+a;
  int e = d+b;
  if(D> e) cout << "Dominater\n";
  else cout << "Everule\n";

  return 0;
}