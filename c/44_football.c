#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int n = strlen(s);
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
            if (cnt >= 7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
            cnt = 1;
    }
    printf("NO\n");
    return 0;
}
