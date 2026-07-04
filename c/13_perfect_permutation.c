#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int p[100010];
    for (int i = 1; i <= n; i++)
        scanf("%d", &p[i]);
    int ok = 1;
    for (int i = 1; i <= n; i++)
    {
        if (p[p[i]] != i)
        {
            ok = 0;
            break;
        }
    }
    printf(ok ? "YES\n" : "NO\n");
    return 0;
}
