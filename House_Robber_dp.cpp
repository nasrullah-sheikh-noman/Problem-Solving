class Solution {
public:
    int dp[101];

    int rec(int i, vector<int>& nums) {
      if(i<0) return 0;
      if(dp[i]!=-1) return dp[i];
      int op1 = nums[i] + rec(i-2, nums);
      int op2 = rec(i-1, nums);
      return dp[i] = max(op1, op2);
    } 

    int rob(vector<int>& nums) {
      memset(dp, -1, sizeof(dp));
      return rec(nums.size()-1, nums);
    }
};