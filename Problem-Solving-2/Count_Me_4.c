#include <stdio.h>
#include <string.h>

int main () {
  char s[10001];
  scanf("%s", s);
  int len = strlen(s);
  int t[26] = {0};
  for (int i = 0; i < len; i++) {
    t[s[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (t[i] > 0) {
      printf("%c - %d\n", i+'a', t[i]);
    }
  }
  return 0;
}