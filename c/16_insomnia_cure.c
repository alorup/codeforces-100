#include <stdio.h>
int main()
{
    int k, a, b, c;
    scanf("%d %d %d %d", &k, &a, &b, &c);
    int cnt = 0;
    for (int i = 1; i <= k; i++)
        if (i % a == 0 || i % b == 0 || i % c == 0)
            cnt++;
    printf("%d\n", cnt);
    return 0;
}
