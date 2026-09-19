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

  // write your code here
  int a, b; cin >> a >> b;
  cout << fixed << setprecision(6);
  cout << a/b << " " << a%b << " " << (double)a/b << endl;

  return 0;
}