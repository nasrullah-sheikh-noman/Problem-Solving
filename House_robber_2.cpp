class Solution {
public:
    int fnc(vector<int> nums, int l, int r) {
      int prev1 = nums[l];
      int prev2 = max(nums[l], nums[l+1]);
      int res = prev2;
      for(int i = l+2; i < r; i++) {
        res = max(prev1+nums[i], prev2);
        prev1 = prev2;
        prev2 = res;
      }
      return res;
    }
    int rob(vector<int>& nums) {
      int n = nums.size();
      if(n==1) return nums[0];
      if(n==2) return max(nums[0], nums[1]);
      int ans = max(fnc(nums, 0, n-1), fnc(nums, 1, n));
      return ans;
    }
};