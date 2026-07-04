#include <stdio.h>
#include <stdlib.h>

static int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    long long ans = 0;
    for (int i = 0; i < n; ++i) ans += abs(a[i] - (i + 1));
    printf("%lld\n", ans);
    free(a);
    return 0;
}
