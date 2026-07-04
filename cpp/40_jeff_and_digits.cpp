#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt5 = 0, cnt0 = 0;
    for (char c : s)
    {
        if (c == '5')
            cnt5++;
        else if (c == '0')
            cnt0++;
    }
    if (cnt0 == 0)
    {
        cout << -1 << "\n";
        return 0;
    }
    int use5 = cnt5 - cnt5 % 9;
    if (use5 == 0)
    {
        cout << 0 << "\n";
        return 0;
    }
    for (int i = 0; i < use5; i++)
        cout << '5';
    for (int i = 0; i < cnt0; i++)
        cout << '0';
    cout << "\n";
}
