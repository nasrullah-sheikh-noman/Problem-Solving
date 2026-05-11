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

  int n, m;
  cin >> n >> m;
  vc<string> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}