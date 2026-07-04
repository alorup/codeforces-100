#include <stdio.h>
#include <string.h>
int main()
{
    char s[100010];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            putchar('0');
        else
        {
            if (i + 1 < n && s[i + 1] == '.')
            {
                putchar('1');
                i++;
            }
            else
            {
                putchar('2');
                i++;
            }
        }
    }
    putchar('\n');
    return 0;
}
