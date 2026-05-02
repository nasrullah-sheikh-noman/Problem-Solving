#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<int>> arr(3, vector<int>(6));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j] ;
    }
  }

  vector<int> p = {4, 5, 6};
  long long sum = 0;
  sort(p.begin(), p.end());

  do{
    long long cnt = 1;
    for(int i = 0; i < 3; i++) {
      int match = 0;
      for (int j = 0; j < 6; j++) {
        if (arr[i][j] == p[i]) {
          match++;
        }
      }
      cnt *= match;
    }
    sum+=cnt;
  } while(next_permutation(p.begin(), p.end()));

  double ans = (double)sum / 216.0;
  cout << fixed << setprecision(10) << ans << endl;

  return 0;
}