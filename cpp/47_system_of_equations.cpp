#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    int cnt = 0;
    for (int a = 0; a <= 1000; a++)
    {
        int b = n - a * a;
        if (b < 0)
            continue;
        if (b * b + a == m)
            cnt++;
    }
    cout << cnt << "\n";
}
