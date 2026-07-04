#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int h, maxh = -1, minh = 1000000, imax = 0, imin = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &h);
        if (h > maxh)
        {
            maxh = h;
            imax = i;
        }
        if (h <= minh)
        {
            minh = h;
            imin = i;
        }
    }
    int moves = (imax - 1) + (n - imin);
    if (imax > imin)
        moves--;
    printf("%d\n", moves);
    return 0;
}
