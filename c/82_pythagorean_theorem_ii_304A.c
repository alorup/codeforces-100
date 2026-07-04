#include <stdio.h>

static int isqrt_floor(long long x)
{
    long long lo = 0, hi = 1e9;
    while (lo < hi)
    {
        long long mid = (lo + hi + 1) / 2;
        if (mid * mid <= x)
            lo = mid;
        else
            hi = mid - 1;
    }
    return (int)lo;
}

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int count = 0;
    for (int a = 1; a <= n; ++a)
    {
        for (int b = a; b <= n; ++b)
        {
            long long c2 = 1LL * a * a + 1LL * b * b;
            int c = isqrt_floor(c2);
            if (c * c == c2 && c <= n && c > b)
            {
                ++count;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
