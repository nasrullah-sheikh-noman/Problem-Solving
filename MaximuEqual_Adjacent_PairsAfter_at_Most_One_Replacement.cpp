class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
      int n = nums.size();
      map<pair<int,int>,int> mp;
      int cnt = 0, mx = 0;
      for(int i = 1; i < n; i++) {
        if(nums[i]==nums[i-1]) cnt++;
        else {
          int a = min(nums[i], nums[i-1]);
          int b = max(nums[i], nums[i-1]);
          mp[{a,b}]++;
        }
      }
      for(auto [x, val]: mp) {
        mx = max(mx, val);
      }
      return mx+cnt;
    }
};