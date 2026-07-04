#include <stdio.h>
int main()
{
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long half = (n + 1) / 2;
    if (k <= half)
        printf("%lld\n", 2 * k - 1);
    else
        printf("%lld\n", 2 * (k - half));
    return 0;
}
