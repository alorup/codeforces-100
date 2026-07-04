#include <bits/stdc++.h>
using namespace std;

struct Contestant { int score, penalty; };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<Contestant> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i].score >> a[i].penalty;
    sort(a.begin(), a.end(), [](const Contestant &x, const Contestant &y) {
        if (x.score != y.score) return x.score > y.score;
        return x.penalty < y.penalty;
    });
    int ans = 0;
    for (auto &c : a) {
        if (c.score == a[k - 1].score && c.penalty == a[k - 1].penalty) ++ans;
    }
    cout << ans << '\n';
    return 0;
}
