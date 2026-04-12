#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);

  while (n >= 10) {
    n = n/10;
  }
  if (n %2 == 0) {
    printf("EVEN");
  } else {
    printf("ODD");
  }

  return 0;
}
