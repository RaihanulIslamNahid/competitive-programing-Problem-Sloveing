#include <bits/stdc++.h>
using namespace std;

int n, k;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> id;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            id[x].push_back(i);
        }
        int ans = n;
        for (auto [_, v] : id)
        {
            v.insert(v.begin(), 0);
            v.push_back(n + 1);
            int sz = v.size();
            vector<int> d;
            for (int i = 1; i < sz; i++)
            {
                d.push_back(v[i] - v[i - 1] - 1);
            }
            sort(d.rbegin(), d.rend());
            int cur = 0;
            for (int i = 1; i < d.size(); i++)
            {
                cur = max(cur, d[i]);
            }
            cur = max(cur, d[0] / 2);
            ans = min(ans, cur);
        }
        cout << ans << '\n';
    }
    return 0;
}