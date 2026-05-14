#include <stdio.h>

long long req(long long arr[], int n, int i, long long sum) {
  if(i == n) return sum;
  sum+=arr[i];
  return req(arr, n, i+1, sum);
}

int main () {
  long long n;
  scanf("%lld", &n);
  long long arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  long long sum = 0;
  long long res = req(arr, n, 0, sum);
  printf("%lld", res);
  return 0;
}