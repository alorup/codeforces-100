#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cur = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cur += b - a;
        ans = max(ans, cur);
    }
    cout << ans << "\n";
}
