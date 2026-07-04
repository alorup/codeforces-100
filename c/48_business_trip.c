#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x, const void *y) { return (*(int *)y - *(int *)x); }
int main()
{
    int k;
    if (scanf("%d", &k) != 1)
        return 0;
    int a[12];
    for (int i = 0; i < 12; i++)
        scanf("%d", &a[i]);
    qsort(a, 12, sizeof(int), cmp);
    if (k == 0)
    {
        printf("0\n");
        return 0;
    }
    int sum = 0, cnt = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += a[i];
        cnt++;
        if (sum >= k)
        {
            printf("%d\n", cnt);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
