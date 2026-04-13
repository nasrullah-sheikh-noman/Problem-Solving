#include <bits/stdc++.h>
using namespace std;

int main () {
  string str;
  cin >> str;
  int n = str.length();
  int x = 0;
  
  int cnt = 0;
  int cnt2 = 0;
  for (int i = 0; i < n; i++) {
    
    if (str[i] == '0') {
      cnt++;
      cnt2 = 0;
      if (cnt == 7) {
        cout << "YES" << endl;
        x++;
        break;
      }
    } 

    else if (str[i] == '1') {
      cnt2++;
      cnt = 0;
      if (cnt2 == 7) {
        cout << "YES" << endl;
        x++;
        break;
      }
    }
  }

  if (x == 0) {
    cout << "NO" << endl;
  }

  return 0;
}