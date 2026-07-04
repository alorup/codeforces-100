#include <stdio.h>
#include <string.h>
int main()
{
    char s[100010];
    scanf("%s", s);
    int n = strlen(s);
    char out[200020];
    int oi = 0;
    for (int i = 0; i < n;)
    {
        if (i + 2 < n && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 3;
            if (oi > 0 && out[oi - 1] == ' ')
            {
            }
            else if (oi > 0)
                out[oi++] = ' ';
        }
        else
        {
            out[oi++] = s[i++];
        }
    }
    if (oi > 0 && out[oi - 1] == ' ')
        oi--;
    out[oi] = '\0';
    printf("%s\n", out);
    return 0;
}
