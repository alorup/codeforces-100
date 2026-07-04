#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    char major = 'B', minor = 'G';
    if (m > n)
    {
        major = 'G';
        minor = 'B';
        swap(n, m);
    }
    while (n > 0 && m > 0)
    {
        cout << major << minor;
        n--;
        m--;
    }
    while (n-- > 0)
        cout << major;
    while (m-- > 0)
        cout << minor;
    cout << "\n";
}
