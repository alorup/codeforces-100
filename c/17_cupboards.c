#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int l, r;
    int left = 0, right = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &l, &r);
        if (l == 1)
            left++;
        if (r == 1)
            right++;
    }
    int moves = (left < n - left ? left : n - left) + (right < n - right ? right : n - right);
    printf("%d\n", moves);
    return 0;
}
