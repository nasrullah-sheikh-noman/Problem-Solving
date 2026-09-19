class Solution {
public:
    vector<int> adj_list[2001];
    bool vis[2001];
    bool pathvis[2001];
    bool cycle = false;

    void dfs(int src) {
      vis[src] = true;
      pathvis[src] = true;
      for(auto x: adj_list[src]) {
        if(vis[x] && pathvis[x]) cycle = true;
        if(!vis[x]) {
          dfs(x);
        }
      }
      pathvis[src] = false;
    }

    bool canFinish(int n, vector<vector<int>>& pre) {
      for(auto x: pre) {
        int a = x[0];
        int b = x[1];
        adj_list[a].push_back(b);
      }
      for(int i = 0; i < n; i++) {
        if(!vis[i]) {
          dfs(i);
        }
      }
      return !cycle;
    }
};