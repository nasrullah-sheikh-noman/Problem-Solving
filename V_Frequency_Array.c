#include <stdio.h>

int main () {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int frq[m+1];
  for (int i = 1; i <= m; i++) {
    frq[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      frq[arr[i]]++;
    }
  }

  for (int i = 1; i <= m; i++) {
    printf("%d\n", frq[i]);
  }

  return 0;
}