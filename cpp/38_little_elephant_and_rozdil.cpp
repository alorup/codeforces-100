#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mn = *min_element(a.begin(), a.end());
    int cnt = count(a.begin(), a.end(), mn);
    if (cnt > 1)
        cout << "Still Rozdil\n";
    else
    {
        for (int i = 0; i < n; i++)
            if (a[i] == mn)
                cout << i + 1 << "\n";
    }
}
