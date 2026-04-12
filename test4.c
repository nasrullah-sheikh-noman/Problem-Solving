#include <stdio.h>

int main () {
  char c;
  scanf("%c", &c);

  int n = c;

  if (n >= 48 && n <= 57) {
    printf("IS DIGIT");
  } else {
    printf("ALPHA\n");
    if (n >= 65 && n <= 90) {
        printf("IS CAPITAL");
    } else if (n >= 97 && n <= 122) {
      printf("IS SMALL");
    }
  }

  return 0;
}
