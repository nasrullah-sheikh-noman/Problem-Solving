#include <stdio.h>

void fnc(int n) {
  long long sum = 1;
  while(n > 0) {
    sum*=n;
    n--;
  }
  printf("%lld", sum);
}

int main () {
  int n;
  scanf("%d", &n);
  fnc(n);

  return 0;
}