#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, r, c;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            if (scanf("%d", &a) != 1)
                return 0;
            if (a == 1)
            {
                r = i;
                c = j;
            }
        }
    printf("%d\n", abs(r - 3) + abs(c - 3));
    return 0;
}
