#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int,int>> dom(n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> dom[i].first >> dom[i].second;
        sum1 += dom[i].first;
        sum2 += dom[i].second;
    }
    int diff = sum1 - sum2;
    if (diff == 0) {
        cout << "YES\n";
        return 0;
    }
    if (diff % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
    bool ok = false;
    for (auto &d : dom) {
        if (d.first - d.second == diff / 2) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << "\n";
    return 0;
}
