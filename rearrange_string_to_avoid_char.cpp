class Solution {
public:
    string rearrangeString(string s, char x, char y) {
      string gy = "";
      string go = "";
      string gx = "";
      for(char c: s) {
        if(c==y) gy+=c;
        else if(c==x) gx+=c;
        else go+=c;
      }
      return gy + go + gx;
    }
};