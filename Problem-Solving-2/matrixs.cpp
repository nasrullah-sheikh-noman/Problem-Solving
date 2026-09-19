#include <bits/stdc++.h>
using namespace std;

int main () {

  int n = 5, m = 5;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> arr[i][j] ;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 1) {
        int s1 = 0;
        if (i < 3) {
          s1 = (3 - (i+1));
        } else {
          s1 = ((i+1) - 3);
        }
        int s2 = 0;
        if (j < 3) {
          s2 = (3 - (j+1));
        } else {
          s2 = ((j+1) - 3);
        }
        int s = s1 + s2;
        cout <<  s << endl;
      }
    }
  }

  return 0;
}
