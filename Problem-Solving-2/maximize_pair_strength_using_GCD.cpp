class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
      int n = nums.size();
      long long mx = 0;
      for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
          long long res = (long long)nums[i]*(long long)nums[j];
          long long res2 = gcd((long long)nums[i], (long long)nums[j]) * gcd((long long)nums[i], (long long)nums[j]);
          long long ans = res / res2;
          mx = max(mx, ans);
        }
      }
      return mx;
    }
};©leetcode