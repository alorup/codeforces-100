#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    scanf("%s", s);
    int c = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] == '4' || s[i] == '7')
            c++;
    if (c == 4 || c == 7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
