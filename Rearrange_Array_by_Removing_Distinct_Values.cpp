class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int> ans;
      
      while(nums.size()) {
        vector<int> tmp;
        for(int i = 0; i < nums.size(); i++) {
          if(find(tmp.begin(), tmp.end(), nums[i])==tmp.end()) {
            tmp.push_back(nums[i]);
          }
        }
        sort(tmp.begin(), tmp.end());
        ans.insert(ans.end(), tmp.begin(), tmp.end());
        for(auto x: tmp) {
          auto val = find(nums.begin(), nums.end(), x);
          nums.erase(val);
        }
      }
      return ans;
    }
};