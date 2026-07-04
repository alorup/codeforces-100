#include <stdio.h>
#include <string.h>
int main()
{
    int k;
    char s[100010];
    if (scanf("%d", &k) != 1)
        return 0;
    scanf("%s", s);
    int cnt[256] = {0};
    for (int i = 0; s[i]; i++)
        cnt[(unsigned char)s[i]]++;
    if (k == 0)
    {
        printf("%s\n", s);
        return 0;
    }
    for (int c = 0; c < 256; c++)
        if (cnt[c] % k != 0)
        {
            printf("-1\n");
            return 0;
        }
    char base[100010];
    int bi = 0;
    for (int c = 'a'; c <= 'z'; c++)
    {
        for (int t = 0; t < cnt[c] / k; t++)
            base[bi++] = c;
    }
    base[bi] = '\0';
    for (int i = 0; i < k; i++)
        printf("%s", base);
    printf("\n");
    return 0;
}
