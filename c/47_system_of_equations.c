#include <stdio.h>
int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return 0;
    int cnt = 0;
    for (int a = 0; a <= 1000; a++)
    {
        int b = n - a * a;
        if (b < 0)
            continue;
        if (b * b + a == m)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
