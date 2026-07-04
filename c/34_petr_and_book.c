#include <stdio.h>
int main()
{
    int n, p;
    if (scanf("%d %d", &n, &p) != 2)
        return 0; /* simple approach: output min(p-1, n-p) */
    int left = p - 1;
    int right = n - p;
    printf("%d\n", left < right ? left : right);
    return 0;
}
