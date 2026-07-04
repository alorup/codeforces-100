#include <stdio.h>
#include <stdlib.h>
int g[5][5];
int calc(int *p)
{
    int res = 0;
    int now = 5;
    int q[5];
    for (int i = 0; i < 5; i++)
        q[i] = p[i];
    while (now > 0)
    {
        int paired = now / 2;
        for (int i = 0; i < paired; i++)
        {
            int u = q[2 * i], v = q[2 * i + 1];
            res += g[u][v] + g[v][u];
        }
        for (int i = 0; i < now - 1; i++)
            q[i] = q[i + 1];
        now--;
    }
    return res;
}
int next_perm(int *p, int n)
{
    int i = n - 2;
    while (i >= 0 && p[i] >= p[i + 1])
        i--;
    if (i < 0)
        return 0;
    int j = n - 1;
    while (p[j] <= p[i])
        j--;
    int tmp = p[i];
    p[i] = p[j];
    p[j] = tmp;
    for (int l = i + 1, r = n - 1; l < r; l++, r--)
    {
        tmp = p[l];
        p[l] = p[r];
        p[r] = tmp;
    }
    return 1;
}
int main()
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (scanf("%d", &g[i][j]) != 1)
                return 0;
    int ans = 0;
    int p[5] = {0, 1, 2, 3, 4};
    do
    {
        int cur = calc(p);
        if (cur > ans)
            ans = cur;
    } while (next_perm(p, 5));
    printf("%d\n", ans);
    return 0;
}
