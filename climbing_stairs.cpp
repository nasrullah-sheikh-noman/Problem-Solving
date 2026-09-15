class Solution {
public:
    int dp[46] = {0};

    int fibo(int n) {
      if(n<=2) return n;
      if(dp[n]!=0) return dp[n];
      return dp[n] = fibo(n-1)+fibo(n-2);
    }

    int climbStairs(int n) {
      return fibo(n);
    }
};