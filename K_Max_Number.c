#include <stdio.h>

void fnc(int n) {
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  for(int i = 0; i < n; i++) {
    if(arr[i] >= max) {
      max = arr[i];
    }
  }
  printf("%d", max);
}

int main () {
  int n;
  scanf("%d", &n);
  fnc(n);

  return 0;
}