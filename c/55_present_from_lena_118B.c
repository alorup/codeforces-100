#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    for (int i = 0; i <= n; i++)
    {
        int spaces = 2 * (n - i);
        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int j = 0; j <= i; j++)
        {
            if (j)
                printf(" ");
            printf("%d", j);
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int spaces = 2 * (n - i);
        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int j = 0; j <= i; j++)
        {
            if (j)
                printf(" ");
            printf("%d", j);
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
