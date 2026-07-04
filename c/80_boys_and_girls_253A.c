#include <stdio.h>
int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return 0;
    char major = 'B', minor = 'G';
    if (m > n)
    {
        major = 'G';
        minor = 'B';
        int tmp = m;
        m = n;
        n = tmp;
    }
    while (n > 0 && m > 0)
    {
        putchar(major);
        putchar(minor);
        n--;
        m--;
    }
    while (n-- > 0)
        putchar(major);
    while (m-- > 0)
        putchar(minor);
    putchar('\n');
    return 0;
}
