class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      vector<int> ans;
      unordered_set<int> st;
      int a, b, n = grid.size();
      int actsum = 0;

      for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          actsum += grid[i][j];
          if(st.find(grid[i][j]) != st.end()) {
            a = grid[i][j];
            ans.push_back(a);
          }
          st.insert(grid[i][j]);
        }
      }
      int sum = (n*n * (n*n +1)) /2;
      b = (sum + a) - actsum;
      ans.push_back(b);
      return ans;
    }
};
