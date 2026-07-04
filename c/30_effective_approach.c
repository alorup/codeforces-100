#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int pos[100010];
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        pos[x] = i;
    }
    long long a = 0, b = 0;
    for (int i = 0; i < m; i++)
    {
        int q;
        scanf("%d", &q);
        int p = pos[q];
        a += p;
        b += (n - p + 1);
    }
    printf("%lld %lld\n", a, b);
    return 0;
}
