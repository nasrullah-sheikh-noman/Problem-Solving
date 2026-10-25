class Solution {
public:
    int n;
    int dp[301][5001];
    int unbouned_knapsack(int i, vector<int>& coins, int amnt) {
      if(i<0) {
        if(amnt==0) return 1;
        else return 0;
      }
      if(dp[i][amnt]!=-1) {
        return dp[i][amnt];
      }
      if(coins[i] <= amnt) {
        int op1 = unbouned_knapsack(i, coins, amnt-coins[i]);
        int op2 = unbouned_knapsack(i-1, coins, amnt);
        dp[i][amnt] = op1 + op2;
        return dp[i][amnt];
      } else {
        dp[i][amnt] = unbouned_knapsack(i-1, coins, amnt);
        return dp[i][amnt];
      }
    }

    int change(int amount, vector<int>& coins) {
      n = coins.size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j <= amount; j++) {
          dp[i][j] = -1;
        }
      }
      return unbouned_knapsack(n-1, coins, amount);
    }
};