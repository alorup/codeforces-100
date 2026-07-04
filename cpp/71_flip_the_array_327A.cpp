#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<int> a(n);
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            ones++;
    }
    int best = -1000, cur = 0;
    for (int i = 0; i < n; i++)
    {
        int v = a[i] == 0 ? 1 : -1;
        cur = max(v, cur + v);
        best = max(best, cur);
    }
    cout << (ones + best) << "\n";
}
