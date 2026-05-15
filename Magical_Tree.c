#include <stdio.h>

int main () {
  int len;
  scanf("%d", &len);
  int n = 10+len;
  int sp = n/2;
  for(int i = 0; i < n; i+=2) {
    for(int i = sp; i > 0; i--) {
      printf(" ");
    }
    sp-=1;
    for(int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  for(int i = 0; i < 5; i++) {
    int limit = (n-len)/2;
    for(int j = 0; j < limit; j++) {
      printf(" ");
    }
    for(int j = 0; j < len; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}