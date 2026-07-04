#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 0;
    int maxv = 100000;
    int *last = calloc(maxv + 1, sizeof(int));
    int *diff = calloc(maxv + 1, sizeof(int));
    int *count = calloc(maxv + 1, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        if (count[x] == 0)
        {
            diff[x] = 0;
            last[x] = i;
            count[x] = 1;
        }
        else if (count[x] == 1)
        {
            diff[x] = i - last[x];
            last[x] = i;
            count[x]++;
        }
        else
        {
            if (i - last[x] != diff[x])
                count[x] = -1;
            last[x] = i;
            if (count[x] != -1)
                count[x]++;
        }
    }
    int t = 0;
    for (int x = 0; x <= maxv; x++)
    {
        if (count[x] > 0)
            t++;
    }
    printf("%d\n", t);
    for (int x = 0; x <= maxv; x++)
    {
        if (count[x] > 0)
            printf("%d %d\n", x, diff[x]);
    }
    free(a);
    free(last);
    free(diff);
    free(count);
    return 0;
}
