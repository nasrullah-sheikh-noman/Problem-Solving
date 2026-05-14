#include <stdio.h>

void res(int n, int i) {
  if(i == n+1) return;
  printf("%d\n", i);
  res(n, i+1);
}

int main () {
  int n;
  scanf("%d", &n);
  res(n, 1);

  return 0;
}