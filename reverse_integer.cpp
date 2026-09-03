class Solution {
public:
    int reverse(int x) {
      long long revnum = 0;
      while(x) {
        int dig = x % 10;
        if(revnum > INT_MAX/10)
          return 0;
        if(revnum < INT_MIN/10) return 0;
        revnum = revnum*10 + dig;
        x /= 10;
      }
      return revnum;
    }
};