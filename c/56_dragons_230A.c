#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s, n;
    if (scanf("%d %d", &s, &n) != 2)
        return 0;
    int x, y;
    typedef struct
    {
        int x, y;
    } P;
    P *a = malloc(n * sizeof(P));
    for (int i = 0; i < n; i++)
        scanf("%d %d", &a[i].x, &a[i].y);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].x > a[j].x)
            {
                P t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    for (int i = 0; i < n; i++)
    {
        if (s <= a[i].x)
        {
            printf("NO\n");
            free(a);
            return 0;
        }
        s += a[i].y;
    }
    printf("YES\n");
    free(a);
    return 0;
}
