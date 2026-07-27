// Brute force 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
      for(auto val: nums) {
        int cnt = 0;
        for(auto el: nums) {
          if(val==el) cnt++;
        }
        if(cnt>n/2) return val;
      } 
      return -1;
    }
};

