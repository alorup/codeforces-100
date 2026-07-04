#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    if (!(cin >> n >> m))
        return 0;
    long long cur = 1, ans = 0;
    for (int i = 0; i < m; i++)
    {
        long long t;
        cin >> t;
        if (t >= cur)
            ans += t - cur;
        else
            ans += n - (cur - t);
        cur = t;
    }
    cout << ans << "\n";
}
