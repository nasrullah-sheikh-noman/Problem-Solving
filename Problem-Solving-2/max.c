#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int temp = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    
    if (x >= temp) {
      temp = x;
    } else {
      temp = temp;
    }
    
  }

  printf("%d", temp);

  return 0;
}