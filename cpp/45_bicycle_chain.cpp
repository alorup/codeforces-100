#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    if (!(cin >> n))
        return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int j = 0; j < m; j++)
        cin >> b[j];
    int best = 0, cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (b[j] % a[i] == 0)
            {
                int r = b[j] / a[i];
                if (r > best)
                {
                    best = r;
                    cnt = 1;
                }
                else if (r == best)
                    cnt++;
            }
    cout << cnt << "\n";
}
