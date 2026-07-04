#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return 0;
    char row[105];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", row);
        for (int j = 0; j < m; j++)
        {
            if (row[j] == '-')
                putchar('-');
            else
            {
                if ((i + j) % 2 == 0)
                    putchar('B');
                else
                    putchar('W');
            }
        }
        putchar('\n');
    }
    return 0;
}
