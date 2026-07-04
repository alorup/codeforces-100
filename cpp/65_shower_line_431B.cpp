#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> g[i][j];
    vector<int> p = {0, 1, 2, 3, 4};
    int best = 0;
    do
    {
        int res = 0;
        vector<int> q = p;
        int now = 5;
        while (now > 0)
        {
            int paired = now / 2;
            for (int i = 0; i < paired; i++)
            {
                int u = q[2 * i], v = q[2 * i + 1];
                res += g[u][v] + g[v][u];
            }
            q.erase(q.begin());
            now--;
        }
        best = max(best, res);
    } while (next_permutation(p.begin(), p.end()));
    cout << best << "\n";
}
