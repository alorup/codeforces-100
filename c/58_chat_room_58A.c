#include <stdio.h>
#include <string.h>
int main()
{
    char s[105];
    if (scanf("%s", s) != 1)
        return 0;
    char *t = "hello";
    int j = 0;
    for (int i = 0; i < strlen(s) && j < 5; i++)
        if (s[i] == t[j])
            j++;
    if (j == 5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
