#include <stdio.h>

int main(void) {
    char g[4][5];
    for (int i = 0; i < 4; ++i) scanf("%s", g[i]);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int cnt_hash = 0, cnt_dot = 0;
            for (int di = 0; di < 2; ++di) {
                for (int dj = 0; dj < 2; ++dj) {
                    if (g[i + di][j + dj] == '#') ++cnt_hash;
                    else ++cnt_dot;
                }
            }
            if (cnt_hash >= 3 || cnt_dot >= 3) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
