#include <stdio.h>
#include <string.h>
int main()
{
    char s[100005];
    if (scanf("%s", s) != 1)
        return 0;
    int n = strlen(s);
    int pos = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            pos = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
        if (i != pos)
            putchar(s[i]);
    putchar('\n');
    return 0;
}
