class Solution {
public:
    int digitsum(int i) {
      int res = 0;
      while(i>0) {
        res+=i%10;
        i/=10;
      }
      return res;
    }
    int largestInteger(int n, int s) {
      int sum = 1;
      for(int i = 0; i < n; i++) {
        sum *= 10;
      }
      sum--;
      for(int i = sum; i >= 0; i--) {
        if(digitsum(i)==s) {
          return i;
        }
      }
      return -1;
    }
};