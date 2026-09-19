#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int s = n%10;
  int t = n/10;

  if (s%t == 0 || t%s == 0) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}