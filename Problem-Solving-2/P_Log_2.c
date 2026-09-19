#include <stdio.h>

long long fnc (long long n) {
  if(n == 1) {
    return 0;
  }
  return 1 + fnc(n/2);
}

int main () {
  long long n;
  scanf("%lld", &n);
  long long res = fnc(n);
  printf("%lld", res);
  return 0;
}