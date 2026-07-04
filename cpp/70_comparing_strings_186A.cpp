#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    if (!(cin >> s1 >> s2))
        return 0;
    int diff = 0;
    for (size_t i = 0; i < s1.size(); i++)
        if (s1[i] != s2[i])
            diff++;
    cout << (diff == 2 ? "YES" : "NO") << "\n";
}
