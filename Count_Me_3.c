#include <stdio.h>
#include <string.h>

int main () {
  int t;
  scanf("%d", &t);
  while(t--) {
    char m[10001];
    scanf("%s", m);
    int mlen = strlen(m);
    int cap = 0;
    int sml = 0;
    int num = 0;
    for (int i = 0; i < mlen; i++) {
      if (m[i] >= 'a' && m[i] <= 'z') {
        sml++;
      } else if (m[i] >= 'A' && m[i] <= 'Z') {
        cap++;
      } else if (m[i] >= '0' && m[i] <= '9') {
        num++;
      }
    }
    printf("%d %d %d\n", cap, sml, num);
  }

  return 0;
}