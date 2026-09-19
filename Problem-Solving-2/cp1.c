#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (2*a[i] >= b[i] && 2*b[i] >= a[i]) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    

    return 0;
}
