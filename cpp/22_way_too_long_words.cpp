#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() > 10)
        cout << s[0] << s.size() - 2 << s.back() << "\n";
    else
        cout << s << "\n";
}
