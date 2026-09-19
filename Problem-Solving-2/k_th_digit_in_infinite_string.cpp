class Solution {
public:
    int kthDigit(long long k) {
      if(k<=9) return k;
      k-=9;
      long long lb = 1;
      for(int i = 2; ; i++) {
        long long hb = 10*lb-1;
        long long block = hb-lb+1;
        long long g = block*10LL*i;
        if(k>g) {
          k-=g;
          lb*=10;
          continue;
        }
        long long bi = (k-1)/(10LL*i);
        long long b = lb+bi;
        long long rem = (k-1)%(10LL*i);
        long long ni = rem/i;
        long long di = rem%i;
        long long num;
        if(b%2==0) {
          num = 10*b+ni;
        } else num = 10*b+9-ni;
        string st = to_string(num);
        return st[di]-'0';
      }
    }
};©leetcode