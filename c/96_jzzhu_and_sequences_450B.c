#include <stdio.h>

int main(void) {
    long long x, y, n;
    if (scanf("%lld %lld", &x, &y) != 2) return 0;
    if (scanf("%lld", &n) != 1) return 0;
    const long long MOD = 1000000007LL;
    long long seq[6] = {x, y, y - x, -x, -y, x - y};
    long long ans = seq[(n - 1) % 6];
    ans %= MOD;
    if (ans < 0) ans += MOD;
    printf("%lld\n", ans);
    return 0;
}
