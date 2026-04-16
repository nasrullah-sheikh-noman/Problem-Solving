#include <stdio.h>

int main () {

  char c;
  scanf("%c", &c);
  if (c == 'z') {
    printf("a");
  }else {
    int n = c+1;
  printf("%c", n);
  }
  

  return 0;
}