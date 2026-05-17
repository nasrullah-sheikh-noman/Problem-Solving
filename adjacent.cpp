class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
      int n = s.size();
      int c = 1;
      for(int i = 0; i < n-1; i++) {
        int min = abs(s[i]-s[i+1]);
        if(min > 2) {
          c = 0;
        }
      }
      if(c == 1) return true;
      else return false;
    }
};