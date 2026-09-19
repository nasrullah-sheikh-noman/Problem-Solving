class Solution {
public:
    void getAllCombination(vector<int>& candidates, int i, int target, vector<vector<int>> &ans, vector<int> &combin) {
      
      if(target==0) {
        ans.push_back(combin);
        return;
      }
      if(i==candidates.size() || target < 0) return;
      if(candidates[i] <= target) {
        combin.push_back(candidates[i]);
        getAllCombination(candidates, i, target-candidates[i], ans, combin);
        combin.pop_back();
      }
      getAllCombination(candidates, i+1, target, ans, combin);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
      vector<int> combin;
      getAllCombination(candidates, 0, target, ans, combin);
      return ans;
    }
};