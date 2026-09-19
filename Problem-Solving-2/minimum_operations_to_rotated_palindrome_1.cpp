class Solution {
public:
    int minOperations(string s) {
      int n = s.size();
      int ans = INT_MAX;
      for(int i = 0; i<n; i++) {
        int c = i;
        for(int j = 0; j < n/2; j++) {
          char a = s[(i+j)%n];
          char b = s[(i+n-1-j)%n]; 
          int diff = abs(a- b);
          c+=min(diff, 26-diff);
          
        }
        ans = min(ans, c);
      }
      return ans;
    }
};©leetcode