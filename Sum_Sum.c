#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];
  int psum = 0;
  int nsum = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] >= 0) {
      psum+=arr[i];
    } else if (arr[i] <= 0) {
      nsum+=arr[i];
    }
  }

  printf("%d %d", psum, nsum);

  return 0;
}