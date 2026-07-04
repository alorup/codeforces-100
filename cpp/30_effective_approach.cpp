#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> pos;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pos[x] = i;
    }
    long long a = 0, b = 0;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        int p = pos[q];
        a += p;
        b += (n - p + 1);
    }
    cout << a << " " << b << "\n";
}
