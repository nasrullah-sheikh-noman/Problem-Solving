#include <stdio.h>
#include <stdlib.h>

int main () {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    int arr2[n];
    for(int i = 0; i < n; i++) {
      arr2[i] = arr[i];
    }
    
    for(int i = 0; i < n-1; i++) {
      for(int j = 0; j < n-1-i; j++) {
        if(arr2[j] > arr2[j+1]) {
          int temp = arr2[j];
          arr2[j] = arr2[j+1];
          arr2[j+1] = temp;
        }
      }
    }
    int arr3[n];
    for(int i = 0; i < n; i++) {
      arr3[i] = abs(arr[i] - arr2[i]);
    }
    for(int i = 0; i < n; i++) {
      printf("%d ", arr3[i]);
    }
    printf("\n");
  }
  return 0;
}