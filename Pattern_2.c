#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int space = n-1;
  int num = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < space; j++) {
      printf(" ");
    }
    for(int k = num; k > 0; k--) {
      printf("%d", k);
    }
    printf("\n");
    space--;
    num++;
  }

  return 0;
}