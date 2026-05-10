#include <stdio.h>

int main () {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int x = 0;
  int y = 0;
  int z = 0;
  if(a <= b && a <= c) {
    x = a;
  }
  else if(b <= c && b <= a) {
    x = b;
  }                                  
  else {
    x = c;
  }

  
  if(a >= b && a >= c) {
    z = a;
  }
  else if(b >= c && b >= a) {
    z = b;
  }                                  
  else {
    z = c;
  }

  y = a+b+c-x-z;

  printf("%d\n%d\n%d", x, y, z);
  printf("\n");
  printf("\n");
  printf("%d\n%d\n%d", a, b, c);
  return 0;
}