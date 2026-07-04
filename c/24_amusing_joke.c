#include <stdio.h>
#include <string.h>
int main()
{
    char a[105], b[105], c[205];
    int cnt[256] = {0};
    scanf("%s %s %s", a, b, c);
    for (int i = 0; i < strlen(a); i++)
        cnt[(unsigned char)a[i]]++;
    for (int i = 0; i < strlen(b); i++)
        cnt[(unsigned char)b[i]]++;
    for (int i = 0; i < strlen(c); i++)
        cnt[(unsigned char)c[i]]--;
    for (int i = 0; i < 256; i++)
        if (cnt[i] != 0)
        {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
    return 0;
}
