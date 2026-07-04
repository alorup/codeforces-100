#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long sx, sy, ex, ey;
    if (!(cin >> t >> sx >> sy >> ex >> ey))
        return 0;
    string s;
    cin >> s;
    long long x = sx, y = sy;
    for (int i = 0; i < t; i++)
    {
        if (x == ex && y == ey)
        {
            cout << i << "\n";
            return 0;
        }
        char c = s[i];
        if (c == 'E' && x < ex)
            x++;
        else if (c == 'W' && x > ex)
            x--;
        else if (c == 'N' && y < ey)
            y++;
        else if (c == 'S' && y > ey)
            y--;
    }
    if (x == ex && y == ey)
        cout << t << "\n";
    else
        cout << "-1\n";
}
