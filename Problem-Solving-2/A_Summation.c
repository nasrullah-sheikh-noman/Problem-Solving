#include <stdio.h>
#include <math.h>

int main () {
  long long n;
  scanf("%lld", &n);
  long long arr[n];
  long long sum = 0;
  for (long long i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
    sum+=arr[i];
  }

  printf("%lld", abs(sum));

  return 0;
}