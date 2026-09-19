#include <stdio.h>

int main()
{

  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    int x;
    scanf("%d", &x);
    long long int sum = 1;
    if (x == 0)
    {
      printf("1 \n");
    }
    else
    {
      for ( int i = x; i > 0; i--)
      {
        sum = sum * i;
      }
      printf("%lld\n", sum);
    }
  }

  return 0;
}