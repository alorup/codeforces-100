#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    set<int> s(a.begin(), a.end());
    cout << s.size() << "\n";
}
