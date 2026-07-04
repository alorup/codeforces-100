#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, pair<int, int>> mp; // x -> (diff, last)
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        if (cnt[x] == 0)
        {
            mp[x] = {0, i};
            cnt[x] = 1;
        }
        else if (cnt[x] == 1)
        {
            int d = i - mp[x].second;
            mp[x] = {d, i};
            cnt[x] = 2;
        }
        else if (cnt[x] > 1)
        {
            int d = i - mp[x].second;
            if (d != mp[x].first)
                cnt[x] = -1;
            mp[x].second = i;
            if (cnt[x] != -1)
                cnt[x]++;
        }
    }
    vector<pair<int, int>> out;
    for (auto &p : cnt)
    {
        if (p.second > 0)
        {
            out.emplace_back(p.first, mp[p.first].first);
        }
    }
    cout << out.size() << "\n";
    for (auto &pr : out)
        cout << pr.first << " " << pr.second << "\n";
}
