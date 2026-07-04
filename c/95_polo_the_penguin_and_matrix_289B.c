#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n, m, d;
    if (scanf("%d %d %d", &n, &m, &d) != 3) return 0;
    int total = n * m;
    int *a = (int *)malloc(sizeof(int) * total);
    for (int i = 0; i < total; ++i) scanf("%d", &a[i]);
    int base = a[0] % d;
    for (int i = 1; i < total; ++i) {
        if (a[i] % d != base) {
            printf("-1\n");
            free(a);
            return 0;
        }
    }
    qsort(a, total, sizeof(int), cmp);
    int target = a[total / 2];
    long long ans = 0;
    for (int i = 0; i < total; ++i) ans += llabs((long long)a[i] - target) / d;
    printf("%lld\n", ans);
    free(a);
    return 0;
}
