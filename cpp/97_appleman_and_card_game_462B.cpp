#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (char c : s) ++cnt[c - 'A'];
    sort(cnt.begin(), cnt.end(), greater<int>());
    long long ans = 0;
    for (int f : cnt) {
        if (k <= 0) break;
        int take = min(k, f);
        ans += 1LL * take * f;
        k -= take;
    }
    cout << ans << '\n';
    return 0;
}
