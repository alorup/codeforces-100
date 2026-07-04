#include <bits/stdc++.h>
using namespace std;

static bool is_prime(long long x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

static long long isqrt_ll(long long x) {
    long long lo = 0, hi = 1000000LL;
    while (lo < hi) {
        long long mid = (lo + hi + 1) / 2;
        if (mid * mid <= x) lo = mid;
        else hi = mid - 1;
    }
    return lo;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        long long r = isqrt_ll(x);
        if (r * r != x || r < 2) {
            cout << "NO\n";
        } else {
            cout << (is_prime(r) ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}
