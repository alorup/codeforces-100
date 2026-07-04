#include <stdio.h>
int main()
{
    int n, k;
    if (scanf("%d %d", &n, &k) != 2)
        return 0;
    int h[150005];
    for (int i = 0; i < n; i++)
        scanf("%d", &h[i]);
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += h[i];
    int best = sum, idx = 1;
    for (int i = k; i < n; i++)
    {
        sum += h[i] - h[i - k];
        if (sum < best)
        {
            best = sum;
            idx = i - k + 2;
        }
    }
    printf("%d\n", idx);
    return 0;
}
