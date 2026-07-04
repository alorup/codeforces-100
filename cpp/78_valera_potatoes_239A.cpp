#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long y, k, n;
    if (!(cin >> y >> k >> n))
        return 0;
    long long start = ((y + 1 + k - 1) / k) * k - y;
    long long end = n - y;
    if (start > end)
    {
        cout << "-1\n";
        return 0;
    }
    for (long long x = start; x <= end; x += k)
    {
        cout << x;
        if (x + k <= end)
            cout << " ";
    }
    cout << "\n";
}
