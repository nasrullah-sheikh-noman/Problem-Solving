#include <stdio.h>

int main () {
  int arr[6][6];
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  int res1 = 0;
  int res2 = 0;
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= 5; j++) {
      if(arr[i][j] == 1) {
        if(i >= 3) {
          res1 = i - 3;
        } else res1 = 3 - i;
        if(j >= 3) {
          res2 = j - 3;
        } else res2 = 3 - j;
      }
    }
  }
  int res = res1 + res2;
  printf("%d", res);
  return 0;
}