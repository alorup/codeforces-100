#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    char s[101];
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (strcmp(s, "f") == 0)
            ok = 1;
    }
    printf(ok ? "YES\n" : "NO\n");
    return 0;
}
