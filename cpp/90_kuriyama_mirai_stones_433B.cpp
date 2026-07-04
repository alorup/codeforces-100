#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    b = a;
    sort(b.begin(), b.end());
    vector<long long> pref(n + 1), pref_sorted(n + 1);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
        pref_sorted[i + 1] = pref_sorted[i] + b[i];
    }
    while (q--) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) cout << pref[r] - pref[l - 1] << '\n';
        else cout << pref_sorted[r] - pref_sorted[l - 1] << '\n';
    }
    return 0;
}
