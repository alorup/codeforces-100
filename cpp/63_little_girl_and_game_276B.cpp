#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    if (!(cin >> s))
        return 0;
    vector<int> freq(26);
    for (char c : s)
        freq[c - 'a']++;
    int odd = 0;
    for (int v : freq)
        if (v % 2)
            odd++;
    cout << ((odd == 0 || odd % 2 == 1) ? "First" : "Second") << "\n";
}
