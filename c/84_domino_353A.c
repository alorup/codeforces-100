#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &a[i], &b[i]);
        sum1 += a[i];
        sum2 += b[i];
    }
    int diff = sum1 - sum2;
    if (diff == 0) {
        printf("YES\n");
    } else if (diff % 2 != 0) {
        printf("NO\n");
    } else {
        int ok = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] - b[i] == diff / 2) {
                ok = 1;
                break;
            }
        }
        printf("%s\n", ok ? "YES" : "NO");
    }
    free(a);
    free(b);
    return 0;
}
