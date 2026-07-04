#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int m = 2 * n;
    int *a = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; ++i) scanf("%d", &a[i]);

    int max_value = 1000000;
    int *cnt = (int *)calloc(max_value + 1, sizeof(int));
    int *first = (int *)malloc(sizeof(int) * (max_value + 1));
    int *second = (int *)malloc(sizeof(int) * (max_value + 1));
    for (int i = 0; i < m; ++i) {
        int x = a[i];
        if (cnt[x] == 0) {
            first[x] = i + 1;
        } else if (cnt[x] == 1) {
            second[x] = i + 1;
        }
        ++cnt[x];
    }

    for (int x = 1; x <= max_value; ++x) {
        if (cnt[x] == 2) {
            printf("%d %d\n", first[x], second[x]);
        }
    }

    free(a);
    free(cnt);
    free(first);
    free(second);
    return 0;
}
