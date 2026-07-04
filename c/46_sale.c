#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x, const void *y) { return (*(int *)x - *(int *)y); }
int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return 0;
    int a[110];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    int ans = 0;
    for (int i = 0; i < m && i < n && a[i] < 0; i++)
        ans += -a[i];
    printf("%d\n", ans);
    return 0;
}
