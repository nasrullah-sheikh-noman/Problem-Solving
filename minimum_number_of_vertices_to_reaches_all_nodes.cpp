class Solution {
public:
    bool vis[100001];
    vector<int> ans;

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
      for(auto x: edges) {
        vis[x[1]] = true;
      }
      for(int i = 0; i < n; i++) {
        if(!vis[i]) ans.push_back(i);
      }
      return ans;
    }
};