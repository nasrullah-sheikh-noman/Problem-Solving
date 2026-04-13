#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  int cnt = 0;
  while(n>0) {
    if (n >= 5) {
      cnt++;
      n = n -5;
    }
    else if (n = 4) {
      cnt++;
      n = n - 4;
    }
    else if (n = 3) {
      cnt++;
      n = n - 3;
    }
    else if (n = 2) {
      cnt++;
      n = n - 2;
    }
    else if (n = 1) {
      cnt++;
      n = n - 1;
    }
  }

  cout << cnt << endl;

  return 0;
}