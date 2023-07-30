#include <bits/stdc++.h>
#define ll long long
#define REP(i, l, r) for (int i = l; i <= r; i++)
#define PER(i, r, l) for (int i = r; i >= l; i--)
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        bool ans = false;
        long long k;
        cin >> a >> b >> c >> k;
        if (c < a || c < b)
        {
            cout << -1 << '\n';
            continue;
        }
        int l = pow(10, c - 1), r = pow(10, c) - 1;
        REP(i, pow(10, a - 1), pow(10, a) - 1)
        {
            int tl = i + pow(10, b - 1), tr = i + pow(10, b) - 1;
            tl = max(tl, l), tr = min(tr, r);
            if (tl > tr)
                continue;
            int len = tr - tl + 1;
            if (k > len)
                k -= len;
            else
            {
                int j = tl + k - 1;
                ans = true;
                cout << i << " + " << j - i << " = " << j << '\n';
                break;
            }
        }
        if (!ans)
            cout << -1 << '\n';
    }
    return 0;
}
