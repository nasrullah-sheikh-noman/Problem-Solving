// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define yes cout << \"YES\" << endl; 
#define no cout << \"NO\" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vc<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int x;
  cin >> x;
  cout << arr[x-1];

  return 0;
}