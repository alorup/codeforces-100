#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int n = strlen(a);
    for (int i = 0; i < n; i++)
        putchar((a[i] == b[i]) ? '0' : '1');
    putchar('\n');
    return 0;
}
