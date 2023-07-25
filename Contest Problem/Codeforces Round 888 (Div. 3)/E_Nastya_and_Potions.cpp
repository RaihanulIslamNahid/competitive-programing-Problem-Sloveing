#include <bits/stdc++.h>
using namespace std;
#define int long long int
void rec(int i, vector<vector<int>> &arr, vector<int> &c, vector<int> &dp, int n)
{
    if (dp[i] != 1e18)
        return;
    int ans = c[i], sum = 1e18;
    for (auto val : arr[i])
    {
        rec(val, arr, c, dp, n);
        if (sum == 1e18)
            sum = dp[val];
        else
            sum += dp[val];
    }
    dp[i] = min(ans, sum);
    return;
}
signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vector<int> p(k);
        for (int i = 0; i < k; i++)
        {
            cin >> p[i];
            c[p[i] - 1] = 0;
        }
        vector<vector<int>> matrix(n);
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                matrix[i].push_back(a - 1);
            }
        }
        vector<int> dp(n, 1e18);
        for (int i = 0; i < n; i++)
        {
            rec(i, matrix, c, dp, n);
        }
        for (int i = 0; i < dp.size(); i++)
        {
            cout << dp[i] << " ";
        }

        cout << endl;
    }
}