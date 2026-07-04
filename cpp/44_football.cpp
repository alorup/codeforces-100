#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 1;
    for (size_t i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
            if (cnt >= 7)
            {
                cout << "YES\n";
                return 0;
            }
        }
        else
            cnt = 1;
    }
    cout << "NO\n";
}
