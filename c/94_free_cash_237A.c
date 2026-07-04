#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int freq[1440] = {0};
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        int h, m;
        scanf("%d %d", &h, &m);
        int t = h * 60 + m;
        ++freq[t];
        if (freq[t] > ans) ans = freq[t];
    }
    printf("%d\n", ans);
    return 0;
}
