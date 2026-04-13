#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x <= y)
    {
      int sum = 0;
      for (int i = x+1; i < y; i++)
      {

        if (i % 2 == 1)
        {
          sum += i;
        }
      }
      printf("%d\n", sum);
    }
    else if (x >= y)
    {
      int sum2 = 0;
      for (int i = y+1; i < x; i++)
      {

        if (i % 2 == 1)
        {
          sum2 += i;
        }
      }
      printf("%d\n", sum2);
    }
  }

  return 0;
}