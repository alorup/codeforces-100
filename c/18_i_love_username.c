#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int seen[256] = {0};
    int cnt = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        unsigned char c = s[i];
        if (c >= 'a' && c <= 'z')
        {
            if (!seen[c])
            {
                seen[c] = 1;
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
