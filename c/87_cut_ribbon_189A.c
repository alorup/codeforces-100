#include <stdio.h>
#include <limits.h>

static int max_int(int a, int b) { return a > b ? a : b; }

int main(void) {
    int n, a, b, c;
    if (scanf("%d %d %d %d", &n, &a, &b, &c) != 4) return 0;
    int dp[4005];
    for (int i = 0; i <= n; ++i) dp[i] = INT_MIN / 2;
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i >= a) dp[i] = max_int(dp[i], dp[i - a] + 1);
        if (i >= b) dp[i] = max_int(dp[i], dp[i - b] + 1);
        if (i >= c) dp[i] = max_int(dp[i], dp[i - c] + 1);
    }
    printf("%d\n", dp[n]);
    return 0;
}
