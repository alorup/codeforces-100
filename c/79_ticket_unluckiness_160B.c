#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    char s[205];
    if (scanf("%d %s", &n, s) != 2)
        return 0;
    int a[200], b[200];
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i] - '0';
        b[i] = s[n + i] - '0';
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            if (b[i] > b[j])
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    bool less = true, greater = true;
    for (int i = 0; i < n; i++)
    {
        if (!(a[i] < b[i]))
            less = false;
        if (!(a[i] > b[i]))
            greater = false;
    }
    printf("%s\n", (less || greater) ? "YES" : "NO");
    return 0;
}
