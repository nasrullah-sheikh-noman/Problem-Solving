#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      for (int k = 1; k <= 6; k++) {
        sum = i + j + k;
        if (sum == n) {
          cout << "Yes" << endl;
          return 0;
        }
        sum = 0;
      }
    }
  }
  cout << "No" << endl;

  return 0;
}