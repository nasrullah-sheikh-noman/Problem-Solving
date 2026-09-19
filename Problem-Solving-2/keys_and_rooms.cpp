class Solution {
public: 
    bool visited[10001];

    void bfs(int src, vector<vector<int>>& rooms) {
      queue<int> q;
      q.push(src);
      visited[src] = true;
      while(!q.empty()) {
        int par = q.front();
        q.pop();
        for(auto x: rooms[par]) {
          if(!visited[x]) {
            q.push(x);
            visited[x] = true;
          }
        }
      } 
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
      memset(visited, false, sizeof(visited));
      int n = rooms.size();
      bfs(0, rooms);
      for(int i = 0; i < n; i++)
        if(!visited[i]) return false;
      return true;
    }
};