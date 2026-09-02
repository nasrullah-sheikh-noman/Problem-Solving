void getPerm(vector<int>& nums, int idx, vector<vector<int>>& ans) {
  if(idx==nums.size())
    ans.push_back({nums});

  for (int i = idx; i < nums.size(); i++) {
    swap(nums[i], nums[idx]);
    getPerm(nums, idx++, ans);
    swaq(nums[i], nums[idx]);
  }
}

vector<vector<int>> ans;
getPerm(nums, 0, ans);
return ans;