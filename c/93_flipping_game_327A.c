#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int total_ones = 0;
    int best = -1000000;
    int cur = -1000000;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        total_ones += x;
        int val = (x == 0) ? 1 : -1;
        if (cur < 0) cur = val;
        else cur += val;
        if (cur > best) best = cur;
    }
    printf("%d\n", total_ones + best);
    return 0;
}
