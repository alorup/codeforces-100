#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b;
    int n;
    cin >> a >> b >> n;
    long long x = a;
    for (int i = 0; i < n; ++i) {
        bool ok = false;
        for (int digit = 0; digit <= 9; ++digit) {
            long long next = x * 10 + digit;
            if (next % b == 0) {
                x = next;
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << x << '\n';
    return 0;
}
