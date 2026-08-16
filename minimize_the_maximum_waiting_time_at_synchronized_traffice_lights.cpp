class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
      int mx = *max_element(lights.begin(), lights.end());
      int ans = 0;
      for(auto x: arrivalTime) {
        int r = x%period;
        int w = 0;
        if(r>=mx) w = period - r;
        ans = max(ans, w);
      }
      return ans;
    }
};©leetcode