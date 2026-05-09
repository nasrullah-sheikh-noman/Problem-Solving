#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = n-1; i >= 0; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= n-i; k++) {
      printf("*");
    }
    for (int l = 0; l < n-i-1; l++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}