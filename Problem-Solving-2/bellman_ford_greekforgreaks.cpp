class Solution {
  public:
    int dis[1001];
    vector<int> ans;
    
    void bellman_ford(int V, vector<vector<int>>& edges) {
        for(int i = 0; i < V-1; i++) {
            for(int j = 0; j < edges.size(); j++) {
                int a= edges[j][0];
                int b = edges[j][1];
                int c = edges[j][2];
                if(dis[a]!=100000000 && dis[a]+c<dis[b]) {
                    dis[b] = dis[a]+c;
                }
            }
        }
    }
  
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        for(int i = 0; i < V; i++) {
            dis[i] = 100000000;
        }
        dis[src] = 0;
        bellman_ford(V,edges);
        for(int j = 0; j < edges.size(); j++) {
            int a = edges[j][0];
            int b = edges[j][1];
            int c = edges[j][2];
            if(dis[a]!=100000000 && dis[a]+c<dis[b]){
                return {-1};
            }
        }
        vector<int> ans;
        for(int i = 0; i < V; i++) {
            ans.push_back(dis[i]);
        }
        return ans;
    }
};