#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        bool ok = true;
        set<int> se;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0 and b[i] == 0)
            {
                continue;
            }
            int steps = 0;
            while (a[i] != 0)
            {
                int tmp = abs(a[i] - b[i]);
                a[i] = b[i];
                b[i] = tmp;
                steps++;
            }
            se.insert(steps % 3);
        }
        ok &= se.size() <= 1;
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}