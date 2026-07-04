#include <stdio.h>
#include <math.h>
int main()
{
    long long a, b, c;
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3)
        return 0;
    long long x = (long long)sqrt((double)a * c / b + 0.5);
    long long y = (long long)sqrt((double)a * b / c + 0.5);
    long long z = (long long)sqrt((double)b * c / a + 0.5);
    printf("%lld %lld %lld\n", x, y, z);
    return 0;
}
