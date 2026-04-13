#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  
  int even = 0;
  int odd = 0;
  int pos = 0;
  int neg = 0;
  for (int x = 0; x < n; x++) {
    int i;
    scanf("%d", &i);
    if (i % 2 == 0) {
      even++;
    } 
    
    if (i%2 != 0) {
      odd++;
    }

    if (i > 0) {
      pos++;
    } 
    
    if (i < 0) {
      neg++;
    }
  }

  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", pos);
  printf("Negative: %d\n", neg);

  return 0;
}