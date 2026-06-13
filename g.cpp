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

  int n, x; cin >> n >> x;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int num; cin >> num;
    if(num <= x) sum+=num;
  }
  cout << sum << endl;
  return 0;
}