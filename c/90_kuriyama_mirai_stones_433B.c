#include <stdio.h>
#include <stdlib.h>

static int cmp_long_long(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n, q;
    if (scanf("%d %d", &n, &q) != 2) return 0;
    long long *a = (long long *)malloc(sizeof(long long) * n);
    long long *b = (long long *)malloc(sizeof(long long) * n);
    long long *pref = (long long *)malloc(sizeof(long long) * (n + 1));
    long long *pref_sorted = (long long *)malloc(sizeof(long long) * (n + 1));
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
        b[i] = a[i];
    }
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
    }
    qsort(b, n, sizeof(long long), cmp_long_long);
    for (int i = 0; i < n; ++i) {
        pref_sorted[i + 1] = pref_sorted[i] + b[i];
    }
    while (q--) {
        int type, l, r;
        scanf("%d %d %d", &type, &l, &r);
        long long sum = (type == 1 ? pref[r] - pref[l - 1] : pref_sorted[r] - pref_sorted[l - 1]);
        printf("%lld\n", sum);
    }
    free(a);
    free(b);
    free(pref);
    free(pref_sorted);
    return 0;
}
