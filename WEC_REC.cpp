#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int cnt = 1;
    int res = 1;
    for (int j = n - 1; j > 0; j--)
    {
      // cout << arr[j] << " ";
      if (arr[j] != arr[j - 1])
      {
        cnt++;
      }
        
        if (cnt <= k) {
          res++;
        } else {
          break;
        }
    }
      cout << min(res, x) << endl;
  }
}
