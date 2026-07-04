#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[10];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (strchr(s, '+') != NULL)
            x++;
        else
            x--;
    }
    printf("%d\n", x);
    return 0;
}
