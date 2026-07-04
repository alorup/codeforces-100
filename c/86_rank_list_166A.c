#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int score;
    int penalty;
} Contestant;

static int cmp(const void *a, const void *b) {
    const Contestant *x = (const Contestant *)a;
    const Contestant *y = (const Contestant *)b;
    if (x->score != y->score) return y->score - x->score;
    return x->penalty - y->penalty;
}

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    Contestant *a = (Contestant *)malloc(sizeof(Contestant) * n);
    for (int i = 0; i < n; ++i) scanf("%d %d", &a[i].score, &a[i].penalty);
    qsort(a, n, sizeof(Contestant), cmp);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i].score == a[k - 1].score && a[i].penalty == a[k - 1].penalty) ++ans;
    }
    printf("%d\n", ans);
    free(a);
    return 0;
}
