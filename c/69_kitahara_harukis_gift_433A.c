#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int c100 = 0, c200 = 0;
    for (int i = 0; i < n; i++)
    {
        int w;
        scanf("%d", &w);
        if (w == 100)
            c100++;
        else
            c200++;
    }
    int total = c100 * 100 + c200 * 200;
    if (total % 2 == 0 && (c200 % 2 == 0 || c100 >= 2))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
