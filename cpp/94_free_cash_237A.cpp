#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> freq(24 * 60, 0);
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        int h, m;
        cin >> h >> m;
        int t = h * 60 + m;
        ++freq[t];
        ans = max(ans, freq[t]);
    }
    cout << ans << '\n';
    return 0;
}
