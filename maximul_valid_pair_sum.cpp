class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
      int n = nums.size();
      int mxleft = nums[0];
      int ans = 0;
      for(int i = k; i < n; i++) {
        mxleft = max(mxleft, nums[i-k]);
        ans = max(ans, mxleft+nums[i]);
      }
      return ans;
    }
};