#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    priority_queue<int> maxq;
    priority_queue<int, vector<int>, greater<int>> minq;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        maxq.push(x);
        minq.push(x);
    }
    long long maxsum = 0, minsum = 0;
    for (int i = 0; i < n; i++)
    {
        int x = maxq.top();
        maxq.pop();
        maxsum += x;
        if (x - 1 > 0)
            maxq.push(x - 1);
    }
    for (int i = 0; i < n; i++)
    {
        int x = minq.top();
        minq.pop();
        minsum += x;
        if (x - 1 > 0)
            minq.push(x - 1);
    }
    cout << maxsum << " " << minsum << "\n";
}
