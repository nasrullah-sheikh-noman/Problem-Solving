class Solution {
public:
    void allSubsets(vector<int> nums, vector<vector<int>> &ans, vector<int> &sub, int i, int n) {
      if(i==n) {
        ans.push_back(sub);
        return;
      }

      sub.push_back(nums[i]);
      allSubsets(nums, ans, sub, i + 1, n);
      sub.pop_back();
      allSubsets(nums, ans, sub, i + 1, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        int n = nums.size();
        vector<vector<int>> ans;
        allSubsets(nums, ans, sub, 0, n);
        return ans;
    }
};