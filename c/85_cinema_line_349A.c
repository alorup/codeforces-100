#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int c25 = 0, c50 = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if (x == 25) {
            ++c25;
        } else if (x == 50) {
            if (c25 == 0) {
                printf("NO\n");
                return 0;
            }
            --c25;
            ++c50;
        } else {
            if (c50 > 0 && c25 > 0) {
                --c50;
                --c25;
            } else if (c25 >= 3) {
                c25 -= 3;
            } else {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
