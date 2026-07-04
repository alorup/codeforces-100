#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt6 = 0, cnt7 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 1)
            cnt1++;
        else if (x == 2)
            cnt2++;
        else if (x == 3)
            cnt3++;
        else if (x == 4)
            cnt4++;
        else if (x == 6)
            cnt6++;
        else if (x == 7)
            cnt7++;
    }
    if (cnt1 != cnt2 || cnt3 != cnt6 || cnt4 != cnt7 || cnt2 != cnt3)
    {
        printf("-1\n");
        return 0;
    }
    for (int i = 0; i < cnt1; i++)
        printf("1 2 4\n");
    for (int i = 0; i < cnt3; i++)
        printf("1 3 6\n");
    return 0;
}
