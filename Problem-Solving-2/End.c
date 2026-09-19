#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  long long arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  for(int i = 0; i < n/2; i++) {
    printf("%lld ", arr[i]);
    printf("%lld ", arr[n-i-1]);
  }
  if(n%2 != 0) printf("%lld ", arr[n/2]);
  return 0;
}