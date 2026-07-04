#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int best = 0, idx = 1;
    for (int i = 0; i < n; i++)
    {
        int rounds = (a[i] + m - 1) / m;
        if (rounds >= best)
        {
            best = rounds;
            idx = i + 1;
        }
    }
    cout << idx << "\n";
}
