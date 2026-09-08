class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.size();
      int mx = 0, l = 0;
      unordered_set<char> st;
      for(int r = 0; r < n; r++) {
        while(st.count(s[r])) {
          st.erase(s[l]);
          l++;
        }
        st.insert(s[r]);
        mx = max(mx, r-l+1);
      }
      return mx;
    }
};