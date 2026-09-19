// // starting with the name of almighty ALLAH
// #include <bits/stdc++.h>
// #define ll long long
// #define pb push_back
// #define vc vector
// #define vi vc<int>
// #define vl vc<ll>
// #define endl "\n" 
// #define yes cout << "YES" << endl; 
// #define no cout << "NO" << endl; 
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int n; cin >> n;
//   int arr[n+1];
//   for(int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
//   for(int i = n-1; i >= 0; i--) {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// starting with the name of almighty ALLAH
// #include <bits/stdc++.h>
// #define ll long long
// #define pb push_back
// #define vc vector
// #define vi vc<int>
// #define vl vc<ll>
// #define endl "\n" 
// #define yes cout << "YES" << endl; 
// #define no cout << "NO" << endl; 
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int n; cin >> n;
//   int arr[n];
//   for(int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
//   for(int i = 0; i < n/2; i++) {
//     swap(arr[i], arr[n-1-i]);
//   }
//   for(int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

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

  int n; cin >> n;
  vi v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  reverse(v.begin(), v.end());
  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  return 0;
}