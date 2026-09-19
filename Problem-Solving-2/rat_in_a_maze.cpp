class Solution {
  public:
    void check(vector<vector<int>>& maze, int r, int c, int n, vector<string> &ans, string& path) {
      if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0) return;
      if(r == n-1 && n-1 == c) {
          ans.push_back(path);
          return;
      }
      maze[r][c] = 0;
      path.push_back('D');
      check(maze, r+1, c, n, ans, path);
      path.pop_back();
      path.push_back('L');
      check(maze, r, c-1, n, ans, path);
      path.pop_back();
      path.push_back('R');
      check(maze, r, c+1, n, ans, path);
      path.pop_back();
      path.push_back('U');
      check(maze, r-1, c, n, ans, path);
      path.pop_back();
      maze[r][c] = 1;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        int n = maze.size();
        if(maze[0][0]==0 || maze[n-1][n-1]==0) return ans;
        string s = "";
        check(maze, 0, 0, n, ans, s);
        return ans;
    }
};