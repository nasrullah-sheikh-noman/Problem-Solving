class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
      int n = nums.size();
      vector<vector<int>> f(n);
      for(int i = 0; i < n; i++) {
        for(int j = 2; j*j<= nums[i]; j++) {
          if(nums[i]%j == 0) {
            f[i].push_back(j);
            while(nums[i]%j==0) nums[i]/=j;
          }
        }
        if(nums[i]>1) f[i].push_back(nums[i]);
      }
      unordered_map<int, int> frq;
      int l = 0, d = 0, ans = 0;
      for(int i = 0; i < n; i++) {
        for(auto x: f[i]) {
          if(frq[x]==0) d++;
          frq[x]++;
        }
        while(d>k) {
          for(auto x: f[l]) {
            frq[x]--;
            if(frq[x]==0) d--;
          }
          l++;
        }
        ans = max(ans, i-l+1);
      }
      return ans;
    }
};©leetcode