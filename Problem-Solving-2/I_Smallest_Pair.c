#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    if (n < 2) {
      printf("0\n");
      continue;
    }

    int sm = arr[0] + arr[1] + (1 - 0);
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int s = arr[i] + arr[j] + (j - i);
        if (s < sm)
        {
          sm = s;
        }
      }
    }

    printf("%d\n", sm);
  }

  return 0;
}