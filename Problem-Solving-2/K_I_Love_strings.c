#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);
  while (n--)
  {
    char s[51], t[51];
    scanf("%s %s", s, t);
    int slen = strlen(s);
    int tlen = strlen(t);
    if (slen > tlen)
    {
      for (int i = 0; i < tlen; i++)
      {
        if (s[i] != '\n' && t[i] != '\n') {
          printf("%c", s[i]);
          printf("%c", t[i]);
        }
      }
      for (int i = tlen; i < slen; i++) {
        printf("%c", s[i]);
      }
      printf("\n");
    }
    else
    {
      for (int i = 0; i < slen; i++)
      {
        if (s[i] != '\n' && t[i] != '\n') {
          printf("%c", s[i]);
          printf("%c", t[i]);
        }
      }
      for (int i = slen; i < tlen; i++) {
        printf("%c", t[i]);
      }
      printf("\n");
    }
  }

  return 0;
}