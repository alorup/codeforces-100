#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int freq[1005] = {0};
    int x, maxf = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        freq[x]++;
        if (freq[x] > maxf)
            maxf = freq[x];
    }
    if (maxf <= (n + 1) / 2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
