#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    cout << n;
    for (int i = 1; i < n; i++)
        cout << " " << i;
    cout << "\n";
}
