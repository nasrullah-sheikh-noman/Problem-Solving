class Solution {
public:
    bool isValid(vector<vector<int>> grid, int r, int c, int n,int val) {
      if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=val) return false;
      if(val==((n*n)-1)) return true;
      bool res1 = isValid(grid, r-2, c+1, n, val+1); 
      bool res2 = isValid(grid, r-1, c+2, n, val+1); 
      bool res3 = isValid(grid, r+1, c+2, n, val+1); 
      bool res4 = isValid(grid, r+2, c+1, n, val+1); 
      bool res5 = isValid(grid, r+2, c-1, n, val+1); 
      bool res6 = isValid(grid, r+1, c-2, n, val+1); 
      bool res7 = isValid(grid, r-1, c-2, n, val+1); 
      bool res8 = isValid(grid, r-2, c-1, n, val+1);
      return res1 || res2 || res3 || res4 || res5 || res6 || res7 || res8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
      return isValid(grid, 0, 0, grid.size(), 0);
    }
};