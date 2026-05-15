#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;
  scanf("%d", &n);
  int lucky_array[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  int sz = 14;
  bool luck = false;
  for(int i = 0; i < sz; i++) {
    if(n % lucky_array[i] == 0) {
      luck = true;
      break;
    }
  }
  if(luck) {
    printf("YES");
  } else printf("NO");
  return 0;
}