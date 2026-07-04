#include <stdio.h>
#include <stdlib.h>
int cmp_asc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int cmp_desc(const void *a, const void *b) { return (*(int *)b - *(int *)a); }
int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return 0;
    int a[1005];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]); // max
    int bmax[1005];
    for (int i = 0; i < m; i++)
        bmax[i] = a[i];
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        qsort(bmax, m, sizeof(int), cmp_desc);
        maxsum += bmax[0];
        bmax[0]--;
    }
    // min
    int bmin[1005];
    for (int i = 0; i < m; i++)
        bmin[i] = a[i];
    int minsum = 0;
    for (int i = 0; i < n; i++)
    {
        qsort(bmin, m, sizeof(int), cmp_asc);
        minsum += bmin[0];
        bmin[0]--;
    }
    printf("%d %d\n", maxsum, minsum);
    return 0;
}
