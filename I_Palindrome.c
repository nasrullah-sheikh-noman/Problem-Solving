#include <stdio.h>
#include <string.h>

int main () {
  char s[1001];
  scanf("%s", s);
  
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (s[i] != s[len-1-i]) {
      printf("NO");
      return 0;
    }
  }

  printf("YES");


  return 0;
}