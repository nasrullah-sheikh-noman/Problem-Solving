#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
      int n, k;
      cin >> n >> k;
      vector <int> arr(n);
      for (int i = 0; i < n; i++) {
          cin >> arr[i] ;
      }
      int l = 0, r = n-1;
      bool ok = true;
      
      while(l < r) {
          if (arr[l] == arr[r]) {
              l++;
              r--;
          } else if (arr[l] == k) {
              l++;
          } else if (arr[r] == k) {
              r--;
          } else {
              ok = false;
              break;
          }
      }
      cout << (ok ? "YES" : "NO") << endl;
  }

}
