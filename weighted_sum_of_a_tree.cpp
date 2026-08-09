class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
      int n = parent.size();
      vector<vector<int>> adj(n);
      for(int i = 1; i < n; i++) {
        adj[parent[i]].push_back(i);
      }
      vector<int> dep(n, 0);
      int mx = 0;
      auto dfs = [&](auto& s, int u, int d)-> void {
        dep[u] = d;
        mx = max(mx, d);
        for(auto x: adj[u]) {
          s(s, x, d+1);
        }
      };
      dfs(dfs, 0, 1);
      long long total = 0;
      for(int i = 0; i < n; i++) {
        long long w = (long long)nums[i] * (mx -  dep[i]+1);
        total+=w;
      }
      return total;
    }
};