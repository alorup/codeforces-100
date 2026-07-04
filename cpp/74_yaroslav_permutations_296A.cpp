#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<int> freq(1001);
    int maxf = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maxf = max(maxf, ++freq[x]);
    }
    cout << (maxf <= (n + 1) / 2 ? "YES" : "NO") << "\n";
}
