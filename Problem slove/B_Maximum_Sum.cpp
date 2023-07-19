#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
long long a[N];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            a[i] += a[i - 1];
        }
        long long ans = 0;
        for (int i = 0; i <= k; i++)
        {
            int l = 2 * i, r = n - (k - i);
            ans = max(ans, a[r] - a[l]);
        }
        cout << ans << '\n';
    }
    return 0;
}
