#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n * m);
    for (int i = 0; i < n * m; ++i) cin >> a[i];
    int base = a[0] % d;
    for (int x : a) {
        if (x % d != base) {
            cout << -1 << '\n';
            return 0;
        }
    }
    sort(a.begin(), a.end());
    int target = a[a.size() / 2];
    long long ans = 0;
    for (int x : a) ans += llabs((long long)x - target) / d;
    cout << ans << '\n';
    return 0;
}
