#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    if (!(cin >> n))
        return 0;
    if (n % 2050 != 0)
    {
        cout << -1 << "\n";
        return 0;
    }
    long long q = n / 2050;
    int sum = 0;
    while (q)
    {
        sum += q % 10;
        q /= 10;
    }
    cout << sum << "\n";
}
