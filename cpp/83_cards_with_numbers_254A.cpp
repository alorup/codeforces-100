#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m = 2 * n;
    vector<int> a(m);
    for (int i = 0; i < m; ++i) cin >> a[i];
    unordered_map<int, vector<int>> pos;
    for (int i = 0; i < m; ++i) pos[a[i]].push_back(i + 1);
    vector<int> keys;
    for (auto &p : pos) keys.push_back(p.first);
    sort(keys.begin(), keys.end());
    for (int x : keys) {
        if (pos[x].size() == 2) {
            cout << pos[x][0] << ' ' << pos[x][1] << '\n';
        }
    }
    return 0;
}
