#include <stdio.h>

int main () {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n+1][m+1];
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  if(n != m) {
    printf("NO\n");
    return 0;
  }
  for(int i = 1; i <= n; i++) {
    if(arr[i][i] != 1) {
      printf("NO\n");
      return 0;
    }
  }
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(i+j == n+1) {
        if(arr[i][j] != 1) {
          printf("NO\n");
          return 0;
        }
      }
    }
  }
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(i+j != n+1 && i != j) {
        if(arr[i][j] != 0) {
          printf("NO\n");
          return 0;
        }
      }
    }
  }
  printf("YES\n");
  return 0;
}