#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    if (!(cin >> a >> b >> c >> d))
        return 0;
    set<int> s = {a, b, c, d};
    cout << 4 - (int)s.size() << "\n";
}
