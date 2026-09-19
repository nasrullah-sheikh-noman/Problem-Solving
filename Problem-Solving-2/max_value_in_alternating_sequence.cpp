class Solution {
public:
    long long maximumValue(int n, int s, int m) {
      long long mv = s;
      if(n==1) return mv;
      long long ms = n-1;
      long long k = ((ms%2) != 0) ? ms : ms-1;
      long long nus = (k+1)/2;
      long long nds = (k-1)/2;
      return mv + (nus*m) - nds;
    }
};