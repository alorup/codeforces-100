#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    if (!(cin >> s))
        return 0;
    int n = s.size(), pos = n - 1;
    for (int i = 0; i < n - 1; i++)
        if (s[i] == '0')
        {
            pos = i;
            break;
        }
    for (int i = 0; i < n; i++)
        if (i != pos)
            cout << s[i];
    cout << "\n";
}
