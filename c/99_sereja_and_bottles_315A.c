#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}
