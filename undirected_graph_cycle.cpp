///  DFS

class Solution {
  public:
    vector<int> adj_list[100001];
    bool vis[100001];
    int par[100001];
    bool cycle = false;
    
    void dfs(int src) {
        vis[src] = true;
        for(auto child: adj_list[src]) {
            if(vis[child] && par[src]!=child)
                cycle = true;
            if(!vis[child]) {
                par[child] = src;
                dfs(child);
            }
        }
    }
    
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        int n = edges.size();
        for(int i = 0; i < n; i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        memset(vis, false, sizeof(vis));
        memset(par, -1, sizeof(par));
        cycle = false;
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i);
            }
        }
        return cycle;
    }
};

//  BFS
class Solution {
  public:
    vector<int> adj_list[100001];
    bool vis[100001];
    int par[100001];
    bool cycle = false;
    
    void bfs(int src) {
        queue<int> q;
        q.push(src);
        vis[src] = true;
        while(!q.empty()) {
            int p = q.front();
            q.pop();
            for(auto child: adj_list[p]) {
                if(vis[child] && par[p]!=child) 
                    cycle = true;
                if(!vis[child]) {
                    q.push(child);
                    par[child] = p;
                    vis[child] = true;
                }
            }
        }
    }
    
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        int n = edges.size();
        for(int i = 0; i < n; i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        memset(vis, false, sizeof(vis));
        memset(par, -1, sizeof(par));
        cycle = false;
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                bfs(i);
            }
        }
        return cycle;
    }
};