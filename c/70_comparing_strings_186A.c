#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100005], s2[100005];
    if (!scanf("%s", s1))
        return 0;
    if (!scanf("%s", s2))
        return 0;
    int n = strlen(s1);
    int diff = 0;
    for (int i = 0; i < n; i++)
        if (s1[i] != s2[i])
            diff++;
    puts(diff == 2 ? "YES" : "NO");
    return 0;
}
