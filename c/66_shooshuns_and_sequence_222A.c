#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k;
    if (scanf("%d %d", &n, &k) != 2)
        return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 0;
    int target = a[k - 1];
    int ok = 1;
    for (int i = k - 1; i < n; i++)
    {
        if (a[i] != target)
        {
            ok = 0;
            break;
        }
    }
    if (!ok)
    {
        printf("-1\n");
    }
    else
    {
        int ops = 0;
        for (int i = 0; i < k - 1; i++)
            if (a[i] != target)
                ops++;
        printf("%d\n", ops);
    }
    free(a);
    return 0;
}
