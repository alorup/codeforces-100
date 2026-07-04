#include <stdio.h>
int main()
{
    long long y, k, n;
    if (scanf("%lld %lld %lld", &y, &k, &n) != 3)
        return 0;
    long long start = ((y + 1 + k - 1) / k) * k - y;
    if (start <= 0)
        start += k;
    long long end = n - y;
    if (start > end)
    {
        printf("-1\n");
        return 0;
    }
    long long first = ((y + 1 + k - 1) / k) * k - y;
    for (long long x = first; x <= end; x += k)
    {
        printf("%lld", x);
        if (x + k <= end)
            printf(" ");
    }
    printf("\n");
    return 0;
}
