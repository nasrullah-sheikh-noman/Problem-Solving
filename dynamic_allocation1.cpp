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

  int *n = new int; cin >> *n;
  int *a = new int[*n];
  for(int i = 0; i < *n; i++) {
    cin >> a[i];
  }
  int *m = new int; cin >> *m;
  int *b = new int[*m];
  for(int i = 0; i < *n; i++) {
    b[i] = a[i];
  }
  for(int i = *n; i < *m; i++) {
    cin >> b[i];
  }
  delete[] a;
  delete n;
  for(int i = 0; i < *m; i++) {
    cout << b[i] << " ";
  }
  return 0;
}