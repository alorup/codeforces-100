#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long x = (long long)sqrt((double)a * c / b + 0.5);
    long long y = (long long)sqrt((double)a * b / c + 0.5);
    long long z = (long long)sqrt((double)b * c / a + 0.5);
    cout << x << " " << y << " " << z << "\n";
}
