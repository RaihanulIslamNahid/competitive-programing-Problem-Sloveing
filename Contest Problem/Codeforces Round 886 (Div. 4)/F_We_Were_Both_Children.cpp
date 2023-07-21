#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, e;
    vector<int> v;
    map<int, int> m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        m.clear();
        v = vector<int>(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            if (e <= n)
            {
                m[e]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (m[i] == 0)
                continue;
            for (int j = i; j <= n; j += i)
            {
                v[j] += m[i];
            }
        }

        cout << *max_element(v.begin(), v.end()) << '\n';
    }

    return 0;
}