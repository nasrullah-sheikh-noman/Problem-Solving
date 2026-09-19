class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0)
        return false;
      int org = x;
      long long revnum = 0;
      while(x) {
        int rem = x % 10;
        revnum = (revnum*10) + rem;
        x /= 10;
      }
      return org == revnum;
    }
};