#include <stdio.h>

int main () {
  int x, y, z;
  char c1, c2;
  scanf("%d %c %d %c %d", &x, &c1, &y, &c2, &z);
  if(c1 == '+') {
    if(x + y == z) {
      printf("Yes");
    } else {
      printf("%d", x+y);
    }
  }
  if(c1 == '-') {
    if(x - y == z) {
      printf("Yes");
    } else {
      printf("%d", x-y);
    }
  }
  if(c1 == '*') {
    if(x * y == z) {
      printf("Yes");
    } else {
      printf("%d", x*y);
    }
  }

  return 0;
}