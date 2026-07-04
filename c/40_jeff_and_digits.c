#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    char s[100010];
    scanf("%s", s);
    int cnt5 = 0, cnt0 = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '5')
            cnt5++;
        else if (s[i] == '0')
            cnt0++;
    }
    if (cnt0 == 0)
    {
        printf("-1\n");
        return 0;
    }
    int use5 = cnt5 - (cnt5 % 9);
    if (use5 == 0)
    {
        printf("0\n");
        return 0;
    }
    for (int i = 0; i < use5; i++)
        putchar('5');
    for (int i = 0; i < cnt0; i++)
        putchar('0');
    putchar('\n');
    return 0;
}
