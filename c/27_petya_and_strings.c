#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[105], b[105];
    scanf("%s %s", a, b);
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    int cmp = strcmp(a, b);
    if (cmp < 0)
        printf("-1\n");
    else if (cmp > 0)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
