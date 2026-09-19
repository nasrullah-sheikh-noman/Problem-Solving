class Solution {
public:
    void getAllCombination(vector<int>& candidates, int idx, int target, vector<vector<int>> &ans, vector<int> &combin) {
      if(target==0) {
        ans.push_back(combin);
        return;
      }
      for(int i = idx; i < candidates.size(); i++) {
        if(candidates[i]>target) break;
        if(i>idx && candidates[i] == candidates[i-1]) continue;
        combin.push_back(candidates[i]);
        getAllCombination(candidates, i+1, target-candidates[i], ans, combin);
        combin.pop_back();
      }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
      vector<int> combin;
      sort(candidates.begin(), candidates.end());
      getAllCombination(candidates, 0, target, ans, combin);
      return ans;
    }
};