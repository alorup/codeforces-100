#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    if (!(cin >> s >> n))
        return 0;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    for (auto &p : v)
    {
        if (s <= p.first)
        {
            cout << "NO\n";
            return 0;
        }
        s += p.second;
    }
    cout << "YES\n";
}
