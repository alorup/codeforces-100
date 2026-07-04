#include <stdio.h>
#include <string.h>
int main()
{
    char s1[205], s2[205];
    if (!fgets(s1, sizeof(s1), stdin))
        return 0;
    if (!fgets(s2, sizeof(s2), stdin))
        return 0;
    int freq[256] = {0};
    size_t n1 = strlen(s1);
    if (n1 > 0 && s1[n1 - 1] == '\n')
        s1[n1 - 1] = 0;
    size_t n2 = strlen(s2);
    if (n2 > 0 && s2[n2 - 1] == '\n')
        s2[n2 - 1] = 0;
    for (size_t i = 0; i < strlen(s1); i++)
        if (s1[i] != ' ')
            freq[(unsigned char)s1[i]]++;
    for (size_t i = 0; i < strlen(s2); i++)
        if (s2[i] != ' ')
        {
            if (freq[(unsigned char)s2[i]] == 0)
            {
                printf("NO\n");
                return 0;
            }
            freq[(unsigned char)s2[i]]--;
        }
    printf("YES\n");
    return 0;
}
