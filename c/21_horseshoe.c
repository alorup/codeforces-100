#include <stdio.h>
int main()
{
    int a, b, c, d;
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4)
        return 0;
    int seen[1000000];
    int arr[4] = {a, b, c, d};
    int distinct = 0;
    for (int i = 0; i < 4; i++)
    {
        int found = 0;
        for (int j = 0; j < i; j++)
            if (arr[j] == arr[i])
            {
                found = 1;
                break;
            }
        if (!found)
            distinct++;
    }
    printf("%d\n", 4 - distinct);
    return 0;
}
