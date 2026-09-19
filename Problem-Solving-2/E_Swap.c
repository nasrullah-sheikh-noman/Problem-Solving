#include <stdio.h>

int swap() {
  int n, m;
  scanf("%d %d", &n, &m);
  int temp = n;
  n = m;
  m = temp;
  printf("%d %d", n, m);
}

int main () {
  swap();
  return 0;
}