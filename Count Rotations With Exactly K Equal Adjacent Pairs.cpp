class Solution {
public:
    int countRotations(string s, int k) {
      int n = s.size();
      int ans = 0;
      for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 1; j < n; j++) {
          if(s[j]==s[j-1]) cnt++;
        }
        if(cnt==k) ans++;
        int f = s[0];
        s.erase(0,1);
        s+=f;
      }
      return ans;
    }
};