#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int cnt = 0;
  for (int i = 2; i <= n; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
      cnt++;
    }
  }
  if (cnt == 0) {
    printf("-1");
  }
  return 0;
}