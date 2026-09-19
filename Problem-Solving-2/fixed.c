#include <stdio.h>

int main () {
  
  int n;
  do {
    scanf("%d", &n);
    if (n != 1999) {
      printf("Wrong\n");
    } else {
      printf("Correct");
    }
  } while (n != 1999);

  return 0;
}