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

int* get_array(int n) {
  int *a = new int[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  return a;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int *n = new int;
  cin >> *n;
  int* b = get_array(*n);
  for(int i = 0; i < *n; i++) {
    cout << b[i] << " ";
  }
  delete[] b;
  delete n;
  return 0;
}