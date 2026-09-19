#include <stdio.h>

int main () {
  long long int a, b, c, d;
  scanf("%lld", &a);
  scanf("%lld", &b);
  scanf("%lld", &c);
  scanf("%lld", &d);

  if ( a+b-c == d || a+b*c == d || a-b+c == d || a-b*c == d || a*b+c == d || a*b-c == d)  {
    printf("YES");
  } else {
    printf("NO");
  }
  

  return 0;
}