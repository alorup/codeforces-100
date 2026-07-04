#include <stdio.h>
#include <stdlib.h>

static int is_prime(int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

static unsigned long long isqrt_ull(unsigned long long x) {
    unsigned long long lo = 0, hi = 1000000ULL;
    while (lo < hi) {
        unsigned long long mid = (lo + hi + 1) / 2;
        if (mid * mid <= x) lo = mid;
        else hi = mid - 1;
    }
    return lo;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; ++i) {
        unsigned long long x;
        scanf("%llu", &x);
        unsigned long long r = isqrt_ull(x);
        if (r * r != x || r < 2) {
            printf("NO\n");
        } else {
            printf("%s\n", is_prime((int)r) ? "YES" : "NO");
        }
    }
    return 0;
}
