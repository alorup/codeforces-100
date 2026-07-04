#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> cnt;
    for (int x : a)
        cnt[x]++;
    if (cnt[1] != cnt[2] || cnt[3] != cnt[6] || cnt[4] != cnt[7] || cnt[2] != cnt[3])
    {
        cout << "-1\n";
        return 0;
    }
    for (int i = 0; i < cnt[1]; i++)
        cout << "1 2 4\n";
    for (int i = 0; i < cnt[3]; i++)
        cout << "1 3 6\n";
}
