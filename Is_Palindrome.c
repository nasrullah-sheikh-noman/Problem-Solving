#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {
  int len = strlen(s);
  int isTrue = 1;
  for(int i = 0; i < len/2; i++) {
    if(s[i] != s[len-1-i]) {
      isTrue = 0;
    }
  }
  return isTrue;
}

int main () {
  char s[1000];
  scanf("%s", s);
  int res = is_palindrome(s);
  if(res == 1) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }

  return 0;
}