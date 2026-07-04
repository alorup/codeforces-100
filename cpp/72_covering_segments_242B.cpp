#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    int bestL = INT_MAX, bestR = -1, bestIdx = -1;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l < bestL || (l == bestL && r > bestR))
        {
            bestL = l;
            bestR = r;
            bestIdx = i;
        }
    }
    if (bestIdx == -1)
        cout << "-1\n";
    else
        cout << bestIdx << "\n";
}
