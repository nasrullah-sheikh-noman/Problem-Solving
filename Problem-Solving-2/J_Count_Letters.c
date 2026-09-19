#include <stdio.h>
#include <string.h>

int main () {
  static char s[10000001];
  scanf("%s", s);
  int frq[26] = {0};
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    frq[s[i]-'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (frq[i]> 0) {
      printf("%c : %d\n", 'a'+i, frq[i]);
    }
  }

  return 0;
}