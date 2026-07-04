#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    if (!(cin >> s))
        return 0;
    char cur = s[0];
    int cnt = 1;
    for (size_t i = 1; i < s.size(); ++i)
    {
        if (s[i] == cur)
        {
            cnt++;
            if (cnt >= 7)
            {
                cout << "YES\n";
                return 0;
            }
        }
        else
        {
            cur = s[i];
            cnt = 1;
        }
    }
    cout << "NO\n";
}
