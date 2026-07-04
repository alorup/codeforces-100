#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    if (scanf("%s", s) != 1)
        return 0;
    int n = strlen(s);
    char cur = s[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == cur)
        {
            cnt++;
            if (cnt >= 7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
        {
            cur = s[i];
            cnt = 1;
        }
    }
    printf("NO\n");
    return 0;
}
