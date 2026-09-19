class Solution {
public:
    int n;
    int dp[1001];
    int solve(vector<int>& cost, int i) {
        if (i == 0 || i == 1)
            return 0;
      if(dp[i]!=-1) return dp[i];
      int op1 = cost[i-1] + solve(cost, i-1);
      int op2 = cost[i-2] + solve(cost, i-2);
      return dp[i] = min(op1, op2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        n = cost.size();
        memset(dp,-1, sizeof(dp));
        return solve(cost, n);
    }
};