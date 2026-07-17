class Solution {
public:
    bool canCross(vector<int>& stones) {
      int n = stones.size();
      vector<vector<bool>> dp(n, vector<bool>(n+1, false));
      dp[0][0] = true;
      for(int i = 0; i < n; i++) {
        for(int k = 0; k <= n; k++) {
          if(dp[i][k]) {
            for(int st = k-1; st <= k+1; st++) {
              if(st>0) {
                for(int nxt = i+1; nxt < n; nxt++) {
                  if(stones[nxt]==stones[i]+st) {
                    dp[nxt][st] = true;
                    break;
                  }
                  if(stones[nxt]>stones[i]+st) {
                    break;
                  }
                }
              }
            }
          }
        }
      }
      for(int i = 0; i <= n; i++) {
        if(dp[n-1][i]) return true;
      }
      return false;
    }
};