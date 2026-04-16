#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int l = 65;
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            printf("%c ", l);


        }
        printf("\n");
        l++;

    }

    return 0;
}
