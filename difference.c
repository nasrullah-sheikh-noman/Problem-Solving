#include <stdio.h>

int main () {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  long long int dif = ((long long)a*(long long)b)-((long long)c*(long long)d);
  printf("Difference = %lld", dif);
  return 0;
}
