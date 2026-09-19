#include <stdio.h>

void res(int n) {
  if(n == 0) return;
  if(n == 1) {
    printf("%d", n);
  } else
  printf("%d ", n);
  res(n-1);
}

int main () {
  int t;
  scanf("%d", &t);
  res(t);
  return 0;
}