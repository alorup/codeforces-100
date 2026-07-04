#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x, y, n;
    cin >> x >> y >> n;
    const long long MOD = 1000000007LL;
    vector<long long> seq = {x, y, y - x, -x, -y, x - y};
    long long ans = seq[(n - 1) % 6];
    ans %= MOD;
    if (ans < 0) ans += MOD;
    cout << ans << '\n';
    return 0;
}
