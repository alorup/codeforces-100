#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    if (!(cin >> n >> s))
        return 0;
    int half = n;
    string a = s.substr(0, half), b = s.substr(half);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool less = true, greater = true;
    for (int i = 0; i < half; i++)
    {
        if (!(a[i] < b[i]))
            less = false;
        if (!(a[i] > b[i]))
            greater = false;
    }
    cout << ((less || greater) ? "YES" : "NO") << "\n";
}
