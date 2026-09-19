class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
      int ans = -1;
      int mn = INT_MAX;
      for(int i = 0; i < drones.size(); i++) {
        int x = drones[i][0];
        int y = drones[i][1];
        int r = drones[i][2];
        int res = abs(x - target[0]) + abs(y-target[1]);
        if(res<=r && res <mn) {
          mn = res;
          ans = i;
        }
      }
      return ans;
    }
};©leetcode