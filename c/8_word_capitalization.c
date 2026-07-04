#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[101];
    if (scanf("%s", s) != 1)
        return 0;
    s[0] = toupper(s[0]);
    printf("%s\n", s);
    return 0;
}
