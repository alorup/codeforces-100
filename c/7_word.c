#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int lower = 0, upper = 0;
    for (int i = 0; s[i]; i++)
    {
        if (islower(s[i]))
            lower++;
        else
            upper++;
    }
    if (upper > lower)
    {
        for (int i = 0; s[i]; i++)
            putchar(toupper(s[i]));
    }
    else
    {
        for (int i = 0; s[i]; i++)
            putchar(tolower(s[i]));
    }
    putchar('\n');
    return 0;
}
