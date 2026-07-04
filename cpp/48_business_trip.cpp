#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    if (!(cin >> k))
        return 0;
    vector<int> a(12);
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    if (k == 0)
    {
        cout << 0 << "\n";
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += a[i];
        if (sum >= k)
        {
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}
