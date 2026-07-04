#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100010];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int best = -1, idx = 1;
    for (int i = 0; i < n; i++)
    {
        int rounds = (a[i] + m - 1) / m;
        if (rounds >= best)
        {
            best = rounds;
            idx = i + 1;
        }
    }
    printf("%d\n", idx);
    return 0;
}
