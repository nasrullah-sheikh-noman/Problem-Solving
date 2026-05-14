#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int arr[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  int sum1 = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        sum1 += arr[i][j];
      }
    }
  }
  int sum2 = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i+j == n-1) {
        sum2 += arr[i][j];
      }
    }
  }
  int sum = 0;
  if(sum1 >= sum2) {
    sum = sum1 - sum2;
  } else sum = sum2 - sum1;
  printf("%d", sum);
  return 0;
}