pair<int, int> findMinMax(int n, const vector<int>& arr) {
//write your code here
  int mn = INT_MAX;
  int mx = INT_MIN;
  for(int i = 0; i < n; i++) {
      mn = min(arr[i], mn);
      mx = max(arr[i], mx);
  }
  return {mn, mx};
}