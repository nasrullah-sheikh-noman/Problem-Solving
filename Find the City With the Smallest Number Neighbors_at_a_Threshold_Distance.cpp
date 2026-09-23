class Solution {
public:
    int adj_mat[101][101];

    void floyd_warshall(int n) {
      for(int k = 0; k<n; k++) {
        for(int i= 0; i < n; i++) {
          for(int j = 0; j < n; j++) {
            if(adj_mat[i][k]!=INT_MAX && adj_mat[k][j]!=INT_MAX && adj_mat[i][j] > adj_mat[i][k]+adj_mat[k][j]) {
              adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
            }
          }
        }
      }
    }

    int findTheCity(int n, vector<vector<int>>& edges, int dst) {
      int len = edges.size();

      for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          if(i==j) adj_mat[i][j] = 0;
          else adj_mat[i][j] = INT_MAX;
        }
      }

      for (int i = 0; i< len; i++) {
        adj_mat[edges[i][0]][edges[i][1]] = edges[i][2];
        adj_mat[edges[i][1]][edges[i][0]] = edges[i][2];
      }
      floyd_warshall(n);

      int mn = INT_MAX;
      int ans = -1;

      for(int i = 0; i< n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
          if(i!=j && adj_mat[i][j]<=dst) cnt++;
        }
        if(cnt<=mn) {
          mn = cnt;
          ans = i;
        }
      }
      return ans;
    }
};