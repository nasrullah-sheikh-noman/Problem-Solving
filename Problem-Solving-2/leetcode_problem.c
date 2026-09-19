#include <stdio.h>
#include <stdbool.h>

int main()
{
  int n, x;
  scanf("%d %d", &n, &x);
  bool c = false;
  int cnt = 0;
  while (n)
  {
    int s = n % 10;
    if (s == x)
    {
      c = true;
    }

    if (n < 10 ) {
      cnt = n;
    }
    n = n / 10;
  }
  if (cnt != x && c) {
    return true;
  } else {
    return false;
  }
}