#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        cur += b - a;
        if (cur > ans)
            ans = cur;
    }
    printf("%d\n", ans);
    return 0;
}
