#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    if (!(cin >> n >> k))
        return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int target = a[k - 1];
    int ops = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != target)
            ops++;
    cout << ops << "\n";
}
