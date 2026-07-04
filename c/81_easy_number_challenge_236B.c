#include <stdio.h>

static int divisor_count(int x) {
    int cnt = 0;
    for (int d = 1; d * d <= x; ++d) {
        if (x % d == 0) {
            ++cnt;
            if (d * d != x) ++cnt;
        }
    }
    return cnt;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                ans += divisor_count(i * j * k);
            }
        }
    }
    printf("%lld\n", ans % 1073741824LL);
    return 0;
}
