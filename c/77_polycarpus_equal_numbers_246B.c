#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    if (sum % n == 0)
        printf("%d\n", n);
    else
        printf("%d\n", n - 1);
    return 0;
}
