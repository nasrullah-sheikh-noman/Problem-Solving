#include <stdio.h>

void res(int arr[], int n, int i) {
  if(i == n) return;
  res(arr, n, i+1);
  if(i % 2 == 0) {
    printf("%d ", arr[i]);
  }
}

int main () {
  int t;
  scanf("%d", &t);
  int arr[t];
  for(int i = 0; i < t; i++) {
    scanf("%d", &arr[i]);
  }
  res(arr, t, 0);
  return 0;
}