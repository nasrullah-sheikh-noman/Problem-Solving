#include <stdio.h>

int main () {
  int t;
  scanf("%d", &t);
  while(t--) {
    long long mul, a, b, c;
    scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);
    if(mul == 0) {
      printf("0\n");
    } else {
      long long mul2 = a * b * c;
      double res = (double)mul / mul2;
      if(res == (long long)res) {
        printf("%lld\n", (long long)res);
      } else printf("-1\n");
    }
  }
  return 0;
}