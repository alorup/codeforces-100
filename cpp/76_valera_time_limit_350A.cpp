#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int maxa = *max_element(a.begin(), a.end());
    int mina = *min_element(a.begin(), a.end());
    int minb = *min_element(b.begin(), b.end());
    int v = max(maxa, 2 * mina);
    if (v < minb)
        cout << v << "\n";
    else
        cout << "-1\n";
}
