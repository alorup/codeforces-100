#include <bits/stdc++.h>
using namespace std;

static int isqrt_floor(long long x)
{
    long long lo = 0, hi = 1e9;
    while (lo < hi)
    {
        long long mid = (lo + hi + 1) / 2;
        if (mid * mid <= x)
            lo = mid;
        else
            hi = mid - 1;
    }
    return (int)lo;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int count = 0;
    for (int a = 1; a <= n; ++a)
    {
        for (int b = a; b <= n; ++b)
        {
            long long c2 = 1LL * a * a + 1LL * b * b;
            int c = isqrt_floor(c2);
            if (c * c == c2 && c <= n && c > b)
            {
                ++count;
            }
        }
    }
    cout << count << '\n';
    return 0;
}
