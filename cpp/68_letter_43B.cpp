#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    if (!getline(cin, s1))
        return 0;
    if (!getline(cin, s2))
        return 0;
    map<char, int> freq;
    for (char c : s1)
        if (c != ' ')
            freq[c]++;
    for (char c : s2)
        if (c != ' ')
        {
            if (freq[c] == 0)
            {
                cout << "NO\n";
                return 0;
            }
            freq[c]--;
        }
    cout << "YES\n";
}
