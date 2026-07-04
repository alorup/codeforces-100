#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    long long totalDrink = 1LL * k * l;
    long long totalLimes = 1LL * c * d;
    long long toasts = totalDrink / nl;
    if (totalLimes < toasts)
        toasts = totalLimes;
    if (1LL * p / np < toasts)
        toasts = p / np;
    printf("%lld\n", toasts / n);
    return 0;
}
