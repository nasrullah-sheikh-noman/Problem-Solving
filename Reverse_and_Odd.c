#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int t = n/2;
  int new[t];
  int s = 0;

  for (int j = 0; j < n; j++) {
    
    if (j%2 != 0) {
      new[s] = arr[j];
      s++;
    }
  }

  for (int k = t-1; k >= 0; k--) {
    printf("%d ", new[k]);
  }

  return 0;
}