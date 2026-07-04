#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    vector<string> g(n);
    for (int i = 0; i < n; i++)
        cin >> g[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '-')
                cout << '-';
            else
                cout << (((i + j) % 2 == 0) ? 'B' : 'W');
        }
        cout << "\n";
    }
}
