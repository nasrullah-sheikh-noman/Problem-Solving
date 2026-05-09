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
  vc<vc<int>> arr(n);

  for(int i = 0; i < n; i++) {
    int l;
    cin >> l;
    arr[i].resize(l);
    for(int j = 0; j < l; j++) {
      cin >> arr[i][j];
    }
  }
  int x, y;
  cin >> x >> y;
  cout << arr[x-1][y-1] << endl;


  return 0;
}