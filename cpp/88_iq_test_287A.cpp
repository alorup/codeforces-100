#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> g(4);
    for (int i = 0; i < 4; ++i) cin >> g[i];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int cnt_hash = 0, cnt_dot = 0;
            for (int di = 0; di < 2; ++di) {
                for (int dj = 0; dj < 2; ++dj) {
                    if (g[i + di][j + dj] == '#') ++cnt_hash;
                    else ++cnt_dot;
                }
            }
            if (cnt_hash >= 3 || cnt_dot >= 3) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
