#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int temp = arr[0];
  int len = 1;
  for (int i = 0; i < n; i++) {
    if (arr[i] < temp) {
      temp = arr[i];
      len = i+1;
    }
  }
  printf("%d %d", temp, len);
  
  return 0;
}