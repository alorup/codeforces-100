#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s;
    if (!(cin >> k >> s))
        return 0;
    vector<int> cnt(256, 0);
    for (char c : s)
        cnt[c]++;
    for (int c = 'a'; c <= 'z'; c++)
        if (cnt[c] % k != 0)
        {
            cout << -1 << "\n";
            return 0;
        }
    string base = "";
    for (char c = 'a'; c <= 'z'; c++)
        base += string(cnt[c] / k, c);
    for (int i = 0; i < k; i++)
        cout << base;
    cout << "\n";
}
