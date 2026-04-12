#include <stdio.h>

int main () {
  char c;
  scanf("%c", &c);

  int n = c;
  if (n <= 90) {
    printf("%c", n+32);
  } else {
    printf("%c", n-32);
  }

  return 0;
}
