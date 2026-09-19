class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
      int fre[101] = {};
      for(int i = 0; i < nums.size(); i++) {
        fre[nums[i]]++;
      }
      int cnt = 0;
      for(int i = 0; i <=100; i++) {
        if(fre[i]!=3) continue;
        vector<int> pos;
        for(int j = 0; j < nums.size(); j++) {
          if(nums[j]==i) pos.push_back(j);
        }
        if(pos[1]-pos[0]==pos[2]-pos[1]) cnt++;
      }
      return cnt;
    }
};©leetcode