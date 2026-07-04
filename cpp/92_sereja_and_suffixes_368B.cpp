#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), ans(n + 2);
    vector<int> seen(100001, 0);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    int distinct = 0;
    for (int i = n; i >= 1; --i) {
        if (!seen[a[i]]) {
            seen[a[i]] = 1;
            ++distinct;
        }
        ans[i] = distinct;
    }
    while (m--) {
        int l;
        cin >> l;
        cout << ans[l] << '\n';
    }
    return 0;
}
