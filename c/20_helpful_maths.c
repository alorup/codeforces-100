#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int main()
{
    char s[100010];
    if (scanf("%s", s) != 1)
        return 0;
    int nums[100010], cnt = 0;
    char *p = s;
    char buf[20];
    int bi = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '+')
        {
            buf[bi] = '\0';
            nums[cnt++] = atoi(buf);
            bi = 0;
        }
        else
            buf[bi++] = s[i];
    }
    if (bi > 0)
    {
        buf[bi] = '\0';
        nums[cnt++] = atoi(buf);
    }
    qsort(nums, cnt, sizeof(int), cmp);
    for (int i = 0; i < cnt; i++)
    {
        if (i)
            putchar('+');
        printf("%d", nums[i]);
    }
    putchar('\n');
    return 0;
}
