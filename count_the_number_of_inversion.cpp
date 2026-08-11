class Solution {
public:
    int numberOfPermutations(int n, vector<vector<int>>& requirements) {
      const int MOD = 1e9+7;
      vector<int> req(n, -1);
      int mx = 0;
      for(auto &r: requirements) {
        int end = r[0];
        int cnt = r[1];
        req[end] = cnt;
        mx = max(mx, cnt);
      }
      if(req[0]>0) {
        return 0;
      }
      req[0] = 0;
      vector<vector<int>> dp(n, vector<int>(mx+1, 0));
      dp[0][0] = 1;
      for(int i = 1; i < n; i++) {
        int l = 0;
        int h = mx;
        if(req[i]!=-1) {
          l = req[i];
          h = req[i];
        }
        for(int j = l; j <= h; j++) {
          for(int k = 0; k <= min(i, j); k++) {
            dp[i][j] += dp[i-1][j-k];
            dp[i][j] %= MOD;
          }
        }
      }
      return dp[n-1][req[n-1]];
    }
};