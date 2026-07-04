#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    if (!(cin >> s))
        return 0;
    string t = "hello";
    int j = 0;
    for (char c : s)
        if (c == t[j])
        {
            j++;
            if (j == 5)
                break;
        }
    cout << (j == 5 ? "YES" : "NO") << "\n";
}
