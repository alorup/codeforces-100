#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int n = strlen(a);
    int ok = 1;
    for (int i = 0; i < n; i++)
        if (a[i] != b[n - 1 - i])
        {
            ok = 0;
            break;
        }
    printf(ok ? "YES\n" : "NO\n");
    return 0;
}
