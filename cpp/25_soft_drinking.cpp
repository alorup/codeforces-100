#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long totalDrink = k * l;
    long long totalLimes = c * d;
    long long toasts = min({totalDrink / nl, totalLimes, p / np});
    cout << toasts / n << "\n";
}
