#include <stdio.h>
#include <string.h>

int main () {
  char s[100001];
  scanf("%s", s);
  int n = strlen(s);
  int cnt = 0;
  for (int i = 0; i < n; i++ ) {
    if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' ) {
      cnt++;
    }
  }
  printf("%d", cnt);

  return 0;
}