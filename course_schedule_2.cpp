class Solution {
public:
    vector<int> adj_list[2001];
    bool vis[2001];
    bool pathvis[2001];
    bool cycle;

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
    void topoOrder(int src, stack<int>& st) {
      vis[src] = true;
      for(auto x: adj_list[src]) {
        if(!vis[x])
          topoOrder(x, st);
      }
      st.push(src);
    }
    
    vector<int> findOrder(int n, vector<vector<int>>& edges) {
      vector<int> ans;
      for(auto x: edges) {
        int a = x[0];
        int b = x[1];
        adj_list[b].push_back(a);
      }
      memset(vis, false, sizeof(vis));
      cycle = false;
      for(int i = 0; i < n; i++) {
        if(!vis[i]) {
          dfs(i);
          if(cycle)
            return ans;
        }
      }
      memset(vis, false, sizeof(vis));
      stack<int> st;
      for (int i = 0; i < n; i++) {
        if(!vis[i])
          topoOrder(i, st);
      }
      while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
      }
      return ans;
    }
};