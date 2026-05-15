#include <stdio.h>

int fnc(int arr[], int n, int i, int max) {
  if(i == n) {
    return max;
  }
  if(arr[i] >= max) {
    max = arr[i];
  }
  return fnc(arr, n, i+1, max);
}

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  int res = fnc(arr, n, 0, max);
  printf("%d", res);
  return 0;
}