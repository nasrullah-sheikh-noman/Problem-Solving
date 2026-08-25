class Solution {
public:
    bool vis[10001];
    bool pathvis[10001];
    vector<int> safe;

    bool dfs(int src, vector<vector<int>>& graph) {
      vis[src] = true;
      pathvis[src] = true;
      for(auto x: graph[src]) {
        if(vis[x] && pathvis[x]) return true;
        if(!vis[x]) {
          if(dfs(x,graph)) return true;
        }
      }
      safe.push_back(src);
      pathvis[src] = false;
      return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      int n = graph.size();
      for(int i = 0; i < n; i++) {
        if(!vis[i]) 
          dfs(i, graph);
      }
      sort(safe.begin(), safe.end());
      return safe;
    }
};