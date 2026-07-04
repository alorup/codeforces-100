#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> pts(n);
    for (int i = 0; i < n; i++)
        cin >> pts[i].first >> pts[i].second;
    for (int i = 0; i < n; i++)
    {
        bool left = 0, right = 0, up = 0, down = 0;
        for (int j = 0; j < n; j++)
            if (i != j)
            {
                if (pts[j].first == pts[i].first && pts[j].second > pts[i].second)
                    up = 1;
                if (pts[j].first == pts[i].first && pts[j].second < pts[i].second)
                    down = 1;
                if (pts[j].second == pts[i].second && pts[j].first > pts[i].first)
                    right = 1;
                if (pts[j].second == pts[i].second && pts[j].first < pts[i].first)
                    left = 1;
            }
        if (left && right && up && down)
        {
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}
