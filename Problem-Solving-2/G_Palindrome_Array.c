#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[n-1-i]) {
      printf("NO");
      return 0;
    }
  }

  printf("YES");

  return 0;
}