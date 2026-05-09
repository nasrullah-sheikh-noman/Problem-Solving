#include <stdio.h>

void sum (int n, int m) {
  int sum = n+m;
  printf("%d", sum);
}

int main () {
  int n, m;
  scanf("%d %d", &n, &m);
  sum(n, m);
  return 0;
}