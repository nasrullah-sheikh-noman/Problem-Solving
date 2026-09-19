#include <stdio.h>

int main () {
  int n, k;
  scanf("%d %d", &n, &k);
  long long arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }
  long long sum = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(arr[j] <= arr[i]) {
        long long temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  for(int i = 0; i < k; i++) {
    if(arr[i] > 0) sum+=arr[i];
  }
  printf("%lld", sum);
  return 0;
}