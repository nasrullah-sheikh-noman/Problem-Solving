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

  int n;cin >> n;
  int a = n/100;
  int b = (n/10)%10;
  int c = n%10;
  cout << n+((b*100)+(c*10)+a)+((c*100)+(a*10)+b);

  return 0;
}