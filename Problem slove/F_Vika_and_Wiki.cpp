#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define f(a) for (int i = 0; i < a; ++i)
#define deb(a) cerr << a << endl;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;
typedef vector<str> vestr;
typedef vector<int> vei;
typedef vector<vector<int>> veve;

void solve()
{
    int n;
    cin >> n;
    vei a(n);
    f(n) cin >> a[i];
    for (int i = 0; i < 100; ++i)
    {
        bool ok = 1;
        for (auto e : a)
            if (e != 0)
                ok = 0;
        if (ok)
        {
            cout << i << '\n';
            return;
        }
        vei b = a;
        f(n) a[i] = (b[i] ^ b[(i + 1) % n]);
    }
    cout << -1;
}

// 1 2 3 4 5 6 .... 0
// 1^2 2^3 3^4 ... 1
// 1^3 2^4 3^5 ...  2
// 1^2^3^4 2^3^4^5 ..... 3
// 1^5 2^6 3^7... 4
// 1^2^5^6 .... 5
// 1^2^3^4^5^6^7^8 ... 6
// 1^9 ... 7
// 1^2^9^10 .. 8
// 1^3^9^11 .. 9
// 1^2^3^9^10^11 .. 10
// 1^2^

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}