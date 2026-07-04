#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long mn = a[0], mx = a[0];
    for (int i = 1; i < n; i++)
    {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    long long cntmn = 0, cntmx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
            cntmn++;
        if (a[i] == mx)
            cntmx++;
    }
    long long diff = mx - mn;
    long long ways = (mn == mx ? (long long)n * (n - 1) / 2 : cntmn * cntmx);
    cout << diff << " " << ways << "\n";
}
