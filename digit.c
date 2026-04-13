#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (x == 0) {
        printf("%d", x);
      }
    
    while (x > 0) {
      
      if (x >= 10) {
        int y = x%10;
        printf("%d ", y);
      } 
      else {
        printf("%d ", x);
      }
      
      x = x / 10;
    }
    printf("\n");
    
  }
  return 0;
}