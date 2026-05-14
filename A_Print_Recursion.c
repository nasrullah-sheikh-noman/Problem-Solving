#include <stdio.h>

void res(int n, int i) {
  if(i == n) {
    return;
  }
  printf("I love Recursion\n");
  res(n,i+1);
}

int main () {
  int n;
  scanf("%d", &n);
  res(n, 0);

  return 0;
}