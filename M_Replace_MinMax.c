#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int A[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  int max = 0;
  int min = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] >= A[max]) {
      max = i;
    }
    if (A[i] <= A[min]) {
      min = i;
    }
  }

  int tmp = A[max];
  A[max] = A[min];
  A[min] = tmp;
  for (int i = 0; i < n; i++) {
    
   
    printf("%d ", A[i]);
  }


  return 0;
}