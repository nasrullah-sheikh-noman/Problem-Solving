#include <stdio.h>
#include <string.h>

int main () {
  char s[101],t[101];
  scanf("%s %s", &s, &t);
  printf("%d", strcmp(s,t));

  return 0;
}
