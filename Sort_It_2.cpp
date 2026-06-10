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

int* sort_it(int n) {
  int *arr = new int[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr+n, greater<int>());
  return arr;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int *arr = sort_it(n);
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}