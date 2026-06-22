// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
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
  int arr[8];
  int sum = 0;
  for(int i = 0; i < 8; i++) {
    cin >> arr[i];
    if(i!=0) {
      if(arr[i-1] > arr[i]) {
        cout << "No\n";
        return 0;
      }
    }
    sum+=arr[i];
    if(arr[i]%25!=0) {
      cout << "No\n";
      return 0;
    }
    if(arr[i]<100 || arr[i] > 675) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}