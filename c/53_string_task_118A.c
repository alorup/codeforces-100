#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_vowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'; }
int main()
{
    char s[1005];
    if (scanf("%s", s) != 1)
        return 0;
    for (int i = 0; i < strlen(s); i++)
    {
        char c = tolower(s[i]);
        if (!is_vowel(c))
            printf(".%c", c);
    }
    printf("\n");
    return 0;
}
