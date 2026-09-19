#include <stdio.h>
#include <string.h>

int main () {
  char s[11], t[11];
  scanf("%s %s", s, t);
  int sl = strlen(s);
  int st = strlen(t);

  printf("%d %d\n%s%s\n", sl, st, s, t);
  char temp = s[0];
  s[0] = t[0];
  t[0] = temp;
  printf("%s %s", s, t);

  return 0;
}