#include <bits/stdc++.h>
using namespace std;

static int divisor_count(int x) {
    int cnt = 0;
    for (int d = 1; d * d <= x; ++d) {
        if (x % d == 0) {
            ++cnt;
            if (d * d != x) ++cnt;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                ans += divisor_count(i * j * k);
            }
        }
    }
    cout << (ans % 1073741824LL) << '\n';
    return 0;
}
