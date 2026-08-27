class Solution {
public:
    vector<int> adj_list[201];
    bool vis[201];

    void dfs(int src) {
      vis[src] = true;
      for(auto child: adj_list[src]) {
        if(!vis[child]) 
          dfs(child);
      }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
      int n = isConnected.size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          if(isConnected[i][j]==1) {
            adj_list[i].push_back(j);
            adj_list[j].push_back(i);
          }
        }
      }
      int cnt = 0;
      for(int i = 0; i < n; i++) {
        if(!vis[i]) {
          dfs(i);
          cnt++;
        }
      }
      return cnt;
    }
};