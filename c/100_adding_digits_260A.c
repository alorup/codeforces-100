#include <stdio.h>

int main(void) {
    long long a, b;
    int n;
    if (scanf("%lld %lld %d", &a, &b, &n) != 3) return 0;
    long long x = a;
    for (int i = 0; i < n; ++i) {
        int found = 0;
        for (int digit = 0; digit <= 9; ++digit) {
            long long next = x * 10 + digit;
            if (next % b == 0) {
                x = next;
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("-1\n");
            return 0;
        }
    }
    printf("%lld\n", x);
    return 0;
}
