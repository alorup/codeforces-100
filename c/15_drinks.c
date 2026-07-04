#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double x;
        scanf("%lf", &x);
        sum += x;
    }
    printf("%.12f\n", sum / n);
    return 0;
}
