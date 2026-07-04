#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long *a = malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    long long mn = a[0], mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
        if (a[i] > mx)
            mx = a[i];
    }
    long long cntmn = 0, cntmx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
            cntmn++;
        if (a[i] == mx)
            cntmx++;
    }
    long long diff = mx - mn;
    long long ways = (mn == mx ? (long long)n * (n - 1) / 2 : cntmn * cntmx);
    printf("%lld %lld\n", diff, ways);
    free(a);
    return 0;
}
