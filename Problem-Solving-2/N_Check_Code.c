#include <stdio.h>
#include <stdbool.h>

int main () {
  int n, m;
  scanf("%d %d", &n, &m);
  int s = n+m+1;
  char str[s];
  scanf("%s", &str);
  
  bool isTrue = true;
  for(int i = 0; i < s; i++) {
    if(i == n) {
      if(str[i] != '-') {
        isTrue = false;
        break;
      }
    } else {
      if(!isdigit(str[i])){
        isTrue = false;
        break;
      }
    }
  }
  if(isTrue) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}