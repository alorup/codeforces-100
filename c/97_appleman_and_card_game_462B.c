#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (y > x) - (y < x);
}

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    char s[100005];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; s[i]; ++i) ++cnt[s[i] - 'A'];
    qsort(cnt, 26, sizeof(int), cmp);
    long long ans = 0;
    for (int i = 0; i < 26 && k > 0; ++i) {
        int take = cnt[i] < k ? cnt[i] : k;
        ans += 1LL * take * cnt[i];
        k -= take;
    }
    printf("%lld\n", ans);
    return 0;
}
