#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min = arr[0];
  for(int i = 0; i < n; i++) {
    if(arr[i] <= min) {
      min = arr[i];
    }
  }
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] == min) {
      cnt++;
    }
  }
  if(cnt % 2 == 0) {
    printf("Unlucky");
  } else printf("Lucky");

  return 0;
}