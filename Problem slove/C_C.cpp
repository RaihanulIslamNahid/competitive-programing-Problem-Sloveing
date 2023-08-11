#include <bits/stdc++.h>
using namespace std;
#define forn(i, a, n) for (int i = a; i < n; ++i)
#define ford(i, a, n) for (int i = n - 1; i >= a; --i)
#define fore(i, a, n) for (int i = a; i <= n; ++i)
typedef long double ld;
#define ll long long
#ifndef M_PI
const ld M_PI = acos(-1.0);
#endif
const ld eps = 1e-9;
const int INF = 2000000000;
const ll LINF = 1ll * INF * INF;
int main()
{
    int n;
    cin >> n;
    ll ans = LINF;
    vector<int> a(n);
    forn(i, 0, n) cin >> a[i];
    fore(x, -100, 100)
    {
        ll s = 0;
        forn(i, 0, n) s += (x - a[i]) * (x - a[i]);
        ans = min(ans, s);
    }
    cout << ans << '\n';
    return 0;
}