#include <bits/stdc++.h>
#include <queue>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        queue<int> q;
        q.push(1);
        q.push(2);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int diff = abs(H - arr[i]);
            bool ss = q.size() && diff % k == 0;
            bool rr = q.size() && diff <= (m - 1) * k;
            bool kk = q.size() && diff;
            if (q.size() && ss && rr && kk)
                sum++;
        }
        cout << sum << endl;
    }

    return 0;
}