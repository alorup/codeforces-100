#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string out = "";
    for (size_t i = 0; i < s.size();)
    {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB")
        {
            i += 3;
            if (!out.empty() && out.back() != ' ')
                out.push_back(' ');
        }
        else
            out.push_back(s[i++]);
    }
    if (!out.empty() && out.back() == ' ')
        out.pop_back();
    cout << out << "\n";
}
