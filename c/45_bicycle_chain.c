#include <stdio.h>
int main()
{
    int n, m;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[55], b[55];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for (int j = 0; j < m; j++)
        scanf("%d", &b[j]);
    int best = 0, cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                int r = b[j] / a[i];
                if (r > best)
                {
                    best = r;
                    cnt = 1;
                }
                else if (r == best)
                    cnt++;
            }
        }
    printf("%d\n", cnt);
    return 0;
}
