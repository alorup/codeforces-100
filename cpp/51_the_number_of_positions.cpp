#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    if (!(cin >> n >> a >> b))
        return 0;
    int ans = n - a - b;
    if (ans < 0)
        ans = 0;
    cout << ans << "\n";
}
