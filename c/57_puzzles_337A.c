#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int main()
{
    int n, k;
    if (scanf("%d %d", &n, &k) != 2)
        return 0;
    int a[10005];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    int best = 1e9;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int diff = a[i + k - 1] - a[i];
        if (diff < best)
            best = diff;
    }
    printf("%d\n", best);
    return 0;
}
