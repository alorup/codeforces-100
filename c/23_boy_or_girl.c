#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int seen[26] = {0}, cnt = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int idx = s[i] - 'a';
        if (!seen[idx])
        {
            seen[idx] = 1;
            cnt++;
        }
    }
    if (cnt % 2)
        printf("IGNORE HIM\n");
    else
        printf("CHAT WITH HER\n");
    return 0;
}
