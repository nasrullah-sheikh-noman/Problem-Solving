class Solution {
public:
    bool vis[200001];
    vector<int> adj_list[200001];

    void dfs(int src) {
      vis[src] = true;
      for(auto x: adj_list[src]) {
        if(!vis[x]) dfs(x);
      }
    }

    bool validPath(int n, vector<vector<int>>& edges, int src, int dst) {
      for(int i = 0; i < edges.size(); i++) {
        int x = edges[i][0];
        int y = edges[i][1];
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
      }
      dfs(src);
      return vis[dst];
    }
};