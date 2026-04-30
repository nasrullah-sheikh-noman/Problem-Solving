#include <bits/stdc++.h>
using namespace std;

int main () {
  int t;
  cin >> t;
  while(t--) {
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    for(auto c: s) {
      if (c == '(') {
        x++;
      } else y++;
    }
    if (x == y) {
      cout << "YES" << endl;
    } else cout << "NO" << endl;
  }

  return 0;
}