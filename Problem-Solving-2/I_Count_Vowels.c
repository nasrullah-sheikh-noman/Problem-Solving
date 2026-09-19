#include <stdio.h>
#include <string.h>

void fnc(char s[]) {
  int len = strlen(s);
  int cnt = 0;
  for(int i = 0; i < len; i++) {
    if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
      cnt+=1;
    }
  }
  printf("%d", cnt);
}

int main () {
  char s[201];
  fgets(s, sizeof(s), stdin);
  fnc(s);

  return 0;
}