class Solution {
public:
    int passwordStrength(string password) {
      string v = password;
      unordered_set<char> c;
      for(char ch: v) {
        c.insert(ch);
      }
      int t = 0;
      for(char ch: c ) {
        if(ch >= 'a' && ch <= 'z') {
          t+=1;
        }
        if(ch >= 'A' && ch <= 'Z') {
          t+=2;
        }
        if(ch >= '0' && ch <= '9') {
          t+=3;
        }
        if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ) {
          t+=5;
        }
      }
      return t;
    }
};©leetcode