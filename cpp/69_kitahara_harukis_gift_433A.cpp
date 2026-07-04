#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    int c100 = 0, c200 = 0;
    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        if (w == 100)
            c100++;
        else
            c200++;
    }
    int total = c100 * 100 + c200 * 200;
    if (total % 2 == 0 && (c200 % 2 == 0 || c100 >= 2))
        cout << "YES\n";
    else
        cout << "NO\n";
}
