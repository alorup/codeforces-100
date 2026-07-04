#include <stdio.h>
int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return 0;
    int a[1010];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);
    int seen[1010] = {0}, cnt = 0;
    for (int i = 0; i < m; i++)
        if (!seen[a[i]])
        {
            seen[a[i]] = 1;
            cnt++;
        }
    printf("%d\n", cnt);
    return 0;
}
