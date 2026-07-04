#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int *a = (int *)malloc(sizeof(int) * (n + 1));
    int *ans = (int *)malloc(sizeof(int) * (n + 2));
    int *seen = (int *)calloc(100001, sizeof(int));
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    int distinct = 0;
    for (int i = n; i >= 1; --i) {
        if (!seen[a[i]]) {
            seen[a[i]] = 1;
            ++distinct;
        }
        ans[i] = distinct;
    }
    for (int i = 0; i < m; ++i) {
        int l;
        scanf("%d", &l);
        printf("%d\n", ans[l]);
    }
    free(a);
    free(ans);
    free(seen);
    return 0;
}
