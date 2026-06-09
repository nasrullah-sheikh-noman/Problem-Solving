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
  int arr[n];
  int mn = 0;
  int mx = 0;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
    if(arr[i] < arr[mn]) mn = i;
    if(arr[i] > arr[mx]) mx = i;
  }
  swap(arr[mx], arr[mn]);
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}