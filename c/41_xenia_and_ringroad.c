#include <stdio.h>
int main()
{
    long long n, m;
    if (scanf("%lld %lld", &n, &m) != 2)
        return 0;
    long long cur = 1, ans = 0;
    for (long long i = 0; i < m; i++)
    {
        long long t;
        scanf("%lld", &t);
        if (t >= cur)
            ans += t - cur;
        else
            ans += n - (cur - t);
        cur = t;
    }
    printf("%lld\n", ans);
    return 0;
}
