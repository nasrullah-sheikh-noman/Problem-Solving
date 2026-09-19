#include <stdio.h>

int req(int arr[], int n, int cnt) {
  int c = 1;
  for(int i = 0; i < n; i++) {
    arr[i] = arr[i]/2;
  }
  for(int i = 0; i < n; i++) {
    if(arr[i] % 2 != 0) {
      c = 0;
    }
  }
  cnt += 1;
  if(c == 1) {
    return req(arr, n, cnt);
  } else return cnt;
}

int main () {
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int con = 1;
  for(int i = 0; i < n; i++) {
    if(arr[i] % 2 != 0) {
      con = 0;
      break;
    }
  }
  int cnt = 0;
  if(con == 1) {
    int res;
    res = req(arr, n, cnt);
    printf("%d", res);
  } else printf("0");
  return 0;
}