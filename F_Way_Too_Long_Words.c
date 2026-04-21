// #include <stdio.h>
// #include <string.h>

// int main () {
//   int t;
//   scanf("%d", &t);
//   char s[1001][1001];
//   for (int k = 0; k < t; k++) {
//     scanf("%s", s[k]);
//   }

//   for (int i = 0; i < t; i++) {
//     int len = strlen(s[i]);
//     if (len < 10) {
//       printf("%s\n", s[i]);
//     }
//     else {
//       printf("%c%d%c\n", s[i][0], len-2, s[i][len-1]);
//     } 
//   }
  
//   return 0;
// }


#include <stdio.h>
#include <string.h>

int main () {
  int t;
  scanf("%d", &t);
  while (t--) {
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    if (len > 10) {
      printf("%c%d%c\n", s[0], len-2, s[len-1]);
    } else {
      printf("%s\n", s);
    }
  }

  return 0;
}