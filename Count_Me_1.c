#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int evencnt = 0;
  int oddcnt = 0;
  for (int i = 0; i < n; i++) {
    if ( arr[i] % 2 == 0) {
      evencnt++;
    } else if ( arr[i] % 2 != 0 && arr[i] % 3 == 0) {
      oddcnt++;
    }
  }
  printf("%d %d", evencnt, oddcnt);

  return 0;
}