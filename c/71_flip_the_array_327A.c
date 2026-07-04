#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[105];
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 1)
            ones++;
    }
    int best = -1000, cur = 0;
    for (int i = 0; i < n; i++)
    {
        int v = (a[i] == 0 ? 1 : -1);
        if (cur < 0)
            cur = v;
        else
            cur += v;
        if (cur > best)
            best = cur;
    }
    if (best < 0)
        best = -1;
    printf("%d\n", ones + best);
    return 0;
}
