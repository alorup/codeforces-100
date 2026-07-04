#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    if (scanf("%s", s) != 1)
        return 0;
    int freq[26] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        freq[s[i] - 'a']++;
    int odd = 0;
    for (int i = 0; i < 26; i++)
        if (freq[i] % 2)
            odd++;
    puts((odd == 0 || odd % 2 == 1) ? "First" : "Second");
    return 0;
}
