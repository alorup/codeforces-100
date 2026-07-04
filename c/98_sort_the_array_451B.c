#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long *a = (long long *)malloc(sizeof(long long) * n);
    long long *b = (long long *)malloc(sizeof(long long) * n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
        b[i] = a[i];
    }
    qsort(b, n, sizeof(long long), cmp);
    int l = 0;
    while (l < n && a[l] == b[l]) ++l;
    if (l == n) {
        printf("yes\n1 1\n");
        free(a);
        free(b);
        return 0;
    }
    int r = n - 1;
    while (r >= 0 && a[r] == b[r]) --r;
    int left = l;
    int right = r;
    for (int i = left; i <= right; ++i) {
        a[i] = b[left + (right - i)];
    }
    int ok = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            ok = 0;
            break;
        }
    }
    if (ok) {
        printf("yes\n%d %d\n", left + 1, right + 1);
    } else {
        printf("no\n");
    }
    free(a);
    free(b);
    return 0;
}
