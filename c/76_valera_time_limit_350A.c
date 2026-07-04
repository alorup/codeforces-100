#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return 0;
    int a[105], b[105];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int maxa = 0, mina = INT_MAX, minb = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxa)
            maxa = a[i];
        if (a[i] < mina)
            mina = a[i];
    }
    for (int i = 0; i < m; i++)
        if (b[i] < minb)
            minb = b[i];
    int v = maxa > 2 * mina ? maxa : 2 * mina;
    if (v < minb)
        printf("%d\n", v);
    else
        printf("-1\n");
    return 0;
}
