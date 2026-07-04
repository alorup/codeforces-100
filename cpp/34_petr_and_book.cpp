#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    if (!(cin >> n >> p))
        return 0;
    int left = p - 1;
    int right = n - p;
    cout << min(left, right) << "\n";
}
