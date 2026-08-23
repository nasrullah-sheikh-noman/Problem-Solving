class Solution {
public:
    bool isPalindromic(string s) {
      string ans = "";
      for(auto c: s) {
        for(int i = 7; i >= 0; i--) {
          ans+=((c>>i) & 1) + '0';
        }
      }
      int l = 0, r = ans.size()-1;
      while(l<r) {
        if(ans[l]!=ans[r]) return false;
        l++, r--;
      }
      return true;
    }
};©leetcode