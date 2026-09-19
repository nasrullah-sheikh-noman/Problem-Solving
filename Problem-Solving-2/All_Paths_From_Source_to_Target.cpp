class Solution {
public:
    int n;
    vector<vector<int>> ans;
    vector<int> tmp;

    void dfs(int sc, vector<vector<int>>& graph) {
      tmp.push_back(sc);
      if(sc==n-1) ans.push_back(tmp);
      for(auto child: graph[sc]) {
        dfs(child, graph);
      }
      tmp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      n = graph.size();
      dfs(0, graph);
      return ans;
    }
};