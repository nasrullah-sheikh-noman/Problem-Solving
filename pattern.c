#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int space = n;
    int hash = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < space; j++) {
            printf(" ");
        }
        for(int k = 1; k <= hash; k++) {
            if(i%2 == 0) {
                printf("#");
            }
            if(i%2 != 0) {
                printf("-");
            }
        }
        printf("\n");
        space--;
        hash+=2;
    }
    int space2 = 1;
    int hash2 = 2*n-3;
    for(int i = n-2; i >= 0; i--) {
        for(int j = 1; j <= space2; j++) {
            printf(" ");
        }
        for(int k = 1; k <= hash2; k++) {
            if(i%2 == 0) {
                printf("#");
            }
            if(i%2 != 0) {
                printf("-");
            }
        }
        printf("\n");
        space2++;
        hash2-=2;
    }

    return 0;
}
