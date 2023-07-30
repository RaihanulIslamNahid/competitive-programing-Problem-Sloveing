#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> E(n);
        for (int j = 0; j < n - 1; j++)
        {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            E[u].push_back(v);
            E[v].push_back(u);
        }
        vector<int> b;
        vector<int> p(n, -1);
        queue<int> Q;
        Q.push(0);
        while (!Q.empty())
        {
            int v = Q.front();
            Q.pop();
            b.push_back(v);
            for (int w : E[v])
            {
                if (w != p[v])
                {
                    p[w] = v;
                    Q.push(w);
                }
            }
        }
        reverse(b.begin(), b.end());
        vector<int> dp(n, 0);
        for (int v : b)
        {
            if (dp[v] == 0)
            {
                dp[v] = 1;
            }
            if (v != 0)
            {
                dp[p[v]] += dp[v];
            }
        }
        int q;
        cin >> q;
        for (int j = 0; j < q; j++)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            cout << (long long)dp[x] * dp[y] << '\n';
        }
    }
}