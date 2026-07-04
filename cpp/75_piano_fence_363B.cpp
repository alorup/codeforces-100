#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    if (!(cin >> n >> k))
        return 0;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += h[i];
    int best = sum, idx = 1;
    for (int i = k; i < n; i++)
    {
        sum += h[i] - h[i - k];
        if (sum < best)
        {
            best = sum;
            idx = i - k + 2;
        }
    }
    cout << idx << "\n";
}
