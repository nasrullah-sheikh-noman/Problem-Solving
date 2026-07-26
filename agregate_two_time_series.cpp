class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
      int n = series1.size(), m = series2.size();
      int i = 0, j = 0;
      vector<vector<int>> ans;
      while(i < n || j < m) {
        int t;
        if(i < n && j < m) {
          t = min(series1[i][0], series2[j][0]);
        } else if(i < n) {
          t = series1[i][0];
        } else {
          t = series2[j][0];
        }
        long long curv1 = (i < n) ? series1[i][1] : 0;
        long long curv2 = (j < m) ? series2[j][1] : 0;
        ans.push_back({t, (int)(curv1+curv2)});
        if(i < n && series1[i][0] == t) i++;
        if(j < m && series2[j][0] == t) j++;
      }
      return ans;
    }
};