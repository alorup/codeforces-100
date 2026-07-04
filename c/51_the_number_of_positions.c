#include <stdio.h>
int main()
{
    int n, a, b;
    if (scanf("%d %d %d", &n, &a, &b) != 3)
        return 0;
    int ans = n - a - b;
    if (ans < 0)
        ans = 0;
    printf("%d\n", ans);
    return 0;
}
