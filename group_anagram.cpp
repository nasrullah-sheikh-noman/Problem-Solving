class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      int n = strs.size();
      vector<vector<string>> ans;
      unordered_map<string, vector<string>> mp;
      for(int i = 0; i< n; i++) {
        string s = strs[i];
        sort(strs[i].begin(), strs[i].end());
        mp[strs[i]].push_back(s);
      }
      for(auto x: mp) {
        ans.push_back(x.second);
      }
      return ans;
    }
};