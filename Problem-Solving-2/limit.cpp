class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
      int n = nums.size();
      if(n <= k) return nums;
      int ii = 1;
      int cnt = 0;
      for(int i = 1; i < n; i++) { 
        if(nums[i] == nums[i-1]) {
          cnt++;
        } else {
          cnt = 0;
        }
        if(cnt < k) {
          nums[ii] = nums[i];
          ii++;
        }
      }
      nums.resize(ii);
      return nums;
    }
};©leetcode