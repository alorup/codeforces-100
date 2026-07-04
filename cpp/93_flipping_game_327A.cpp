#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int total_ones = 0;
    int best = -1000000;
    int cur = -1000000;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        total_ones += x;
        int val = (x == 0) ? 1 : -1;
        cur = max(val, cur + val);
        best = max(best, cur);
    }
    cout << total_ones + best << '\n';
    return 0;
}
