#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int bestL = 1000000001, bestR = -1, bestIdx = -1;
    int l, r;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &l, &r);
        if (l < bestL || (l == bestL && r > bestR))
        {
            bestL = l;
            bestR = r;
            bestIdx = i;
        }
    }
    if (bestIdx == -1)
    {
        printf("-1\n");
        return 0;
    }
    rewind(stdin);
}
