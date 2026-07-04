#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[1010], y[1010];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &x[i], &y[i]);
    for (int i = 0; i < n; i++)
    {
        bool left = 0, right = 0, up = 0, down = 0;
        for (int j = 0; j < n; j++)
            if (i != j)
            {
                if (x[j] == x[i] && y[j] > y[i])
                    up = 1;
                if (x[j] == x[i] && y[j] < y[i])
                    down = 1;
                if (y[j] == y[i] && x[j] > x[i])
                    right = 1;
                if (y[j] == y[i] && x[j] < x[i])
                    left = 1;
            }
        if (left && right && up && down)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
