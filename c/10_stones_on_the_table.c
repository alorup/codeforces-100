#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char s[100010];
    scanf("%d", &n);
    scanf("%s", s);
    int ans = 0;
    for (int i = 1; i < n; i++)
        if (s[i] == s[i - 1])
            ans++;
    printf("%d\n", ans);
    return 0;
}
