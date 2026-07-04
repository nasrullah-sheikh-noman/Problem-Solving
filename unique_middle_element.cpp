class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int len = nums.size();
      int cnt = 0;
      int mid = nums[len/2];
      for(int i = 0; i < len; i++) {
        if(mid == nums[i]) cnt++;
      }
      if(cnt>=2) return false;
      else return true;
    }
};