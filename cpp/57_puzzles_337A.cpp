#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    if (!(cin >> n >> k))
        return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int best = INT_MAX;
    for (int i = 0; i + k - 1 < n; i++)
        best = min(best, a[i + k - 1] - a[i]);
    cout << best << "\n";
}
