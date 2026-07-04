#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> st(s.begin(), s.end());
    if (st.size() % 2)
        cout << "IGNORE HIM\n";
    else
        cout << "CHAT WITH HER\n";
}
