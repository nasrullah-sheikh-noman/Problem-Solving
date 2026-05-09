#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int star = 1;
  int space = n;
  for (int i = 0; i < n; i++) {
    for (int j = space-1; j > 0; j--) {
      printf(" ");
    }
    for(int k = 1; k <= star; k++) {
      printf("*");
    }
    printf("\n");
    space--;
    star+=2;
  }
  int star2 = 2*n-1;
  int space2 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < space2; j++) {
      printf(" ");
    }
    for(int k = star2; k > 0; k--) {
      printf("*");
    }
    printf("\n");
    space2++;
    star2-=2;
  }

  return 0;
}