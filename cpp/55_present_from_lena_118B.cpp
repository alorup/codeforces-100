#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    for (int i = 0; i <= n; i++)
    {
        int spaces = 2 * (n - i);
        for (int s = 0; s < spaces; s++)
            cout << ' ';
        for (int j = 0; j <= i; j++)
        {
            if (j)
                cout << ' ';
            cout << j;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << ' ' << j;
        }
        cout << "\n";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int spaces = 2 * (n - i);
        for (int s = 0; s < spaces; s++)
            cout << ' ';
        for (int j = 0; j <= i; j++)
        {
            if (j)
                cout << ' ';
            cout << j;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << ' ' << j;
        }
        cout << "\n";
    }
}
