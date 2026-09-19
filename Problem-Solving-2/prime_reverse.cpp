class Solution {
public:
    int sumOfPrimesInRange(int n) {
      int r = 0;
      int v = n;
      while(v){
        r = r*10+v%10;
        v = v/10;
      }
     
      int sum = 0;
      if (r >= n) {
        for (int i = n; i <= r; i++) {
          bool c = true;
          if(i < 2) c = false;
          for(int j = 2; j*j <= i; j++) {
            if(i <= 2) continue;
            if(i%j == 0) {
              c = false;
            }
          }
          if (c) sum+=i;
        }
      }
      if (n > r) {
        for (int i = r; i <= n; i++) {
          bool c = true;
          if(i < 2) c = false;
          for(int j = 2; j*j <= i; j++) {
            if(i <= 2) continue;
            if(i%j == 0) {
              c = false;
            }
          }
          if (c) sum+=i;
        }
      }
      return sum;
    }
};