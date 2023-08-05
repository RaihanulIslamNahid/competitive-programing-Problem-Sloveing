#include <bits/stdc++.h>
using namespace std;

int f(int l, int r)
{
    if (l == r)
        return 0;
    cout << "? " << l << ' ' << r << endl;
    int x;
    cin >> x;
    return x;
}
bool ok(int l, int r)
{
    return f(l, r - 1) == f(l, r);
}
int solve(int l, int r)
{
    if (l == r)
        return l;
    int mid = (l + r) >> 1;
    int x = solve(l, mid), y = solve(mid + 1, r);
    if (ok(x, y))
        return y;
    return x;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int ans = solve(1, n);
        cout << "! " << ans << endl;
    }
    return 0;
}