#include <stdio.h>

int main () {
  int t;
  scanf("%d", &t);
  while (t--) {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int total = m1 + m2;
    int newdays = (d*m1)/total;

    int fewerdays = d - newdays;
    printf("%d\n", fewerdays);

  }

  return 0;
}