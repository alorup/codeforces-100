#include <stdio.h>
int distinct(int y)
{
    int seen[10] = {0};
    while (y)
    {
        int d = y % 10;
        if (seen[d])
            return 0;
        seen[d] = 1;
        y /= 10;
    }
    return 1;
}
int main()
{
    int y;
    scanf("%d", &y);
    while (1)
    {
        y++;
        if (distinct(y))
        {
            printf("%d\n", y);
            break;
        }
    }
    return 0;
}
