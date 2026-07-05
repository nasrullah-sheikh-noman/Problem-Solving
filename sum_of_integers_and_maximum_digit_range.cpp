class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
      int n = nums.size();
      int mxrange = -1;
      int ans = 0;
      for(int i = 0; i < n; i++) {
        int num = nums[i];
        int mx = 0;
        int mn = 9;
        while(num) {
          int val = num%10;
          mx = max(val, mx);
          mn = min(val, mn);
          num/=10;
        }
        int diff = mx - mn;
        if(diff> mxrange) {
          mxrange = diff;
          ans = nums[i];
        } else if(diff == mxrange) {
          ans+=nums[i];
        }
      }
      return ans;
    }
};