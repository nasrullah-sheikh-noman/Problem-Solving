class Solution {
public:
    int n, m;
    vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int si, int sj) {
      if(si<0 || si>=n || sj<0 || sj>=m) return false;
      return true;
    }

    void DFS(int val, int sr, int sc, vector<vector<int>>& image, int color) {
      image[sr][sc] = color;
      for(int i = 0; i < 4; i++) {
        int si = sr + moves[i].first;
        int sj = sc + moves[i].second;
        if(valid(si, sj) && image[si][sj] == val) {
          DFS(val, si, sj, image, color);
        }
      }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      n = image.size();
      m = image[0].size();
      int val = image[sr][sc];
      if(val==color) return image;
      DFS(val, sr, sc, image, color);
      return image;
    }
};