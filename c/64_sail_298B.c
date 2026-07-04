#include <stdio.h>
int main()
{
    int t;
    long long sx, sy, ex, ey;
    if (scanf("%d %lld %lld %lld %lld", &t, &sx, &sy, &ex, &ey) != 5)
        return 0;
    char s[100005];
    scanf("%s", s);
    long long x = sx, y = sy;
    for (int i = 0; i < t; i++)
    {
        if (x == ex && y == ey)
        {
            printf("%d\n", i);
            return 0;
        }
        char c = s[i];
        if (c == 'E' && x < ex)
            x++;
        else if (c == 'W' && x > ex)
            x--;
        else if (c == 'N' && y < ey)
            y++;
        else if (c == 'S' && y > ey)
            y--;
    }
    if (x == ex && y == ey)
        printf("%d\n", t);
    else
        printf("-1\n");
    return 0;
}
