#include <stdio.h>

int main()
{

  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      printf("1\n");
    }
    else if (i != n)
    {
      if (n % i == 0)
      {
        printf("%d\n", i);
      }
    }
    else if (i = n)
    {
      printf("%d\n", n);
    }
  }

  return 0;
}