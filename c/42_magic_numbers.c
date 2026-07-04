#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n % 2050 != 0)
    {
        printf("-1\n");
        return 0;
    }
    long long q = n / 2050;
    int sum = 0;
    while (q > 0)
    {
        sum += q % 10;
        q /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
