#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100010];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min = INT_MAX, idx = -1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            idx = i + 1;
            cnt = 1;
        }
        else if (a[i] == min)
            cnt++;
    }
    if (cnt > 1)
        printf("Still Rozdil\n");
    else
        printf("%d\n", idx);
    return 0;
}
