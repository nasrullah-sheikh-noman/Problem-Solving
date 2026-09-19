class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int l, int u) {
      sort(nums.begin(), nums.end());
      vector<vector<int>> ans;
      int prev = l;
      for(auto x: nums) {
        if(x<l) continue;
        if(x>u) break;
        if(prev<x) {
          ans.push_back({prev, x-1});
        }
        prev = max(prev, x+1);
      }
      if(prev<=u) ans.push_back({prev, u});
      return ans;
    }
};©leetcode