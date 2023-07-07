#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ss second
#define all(c) c.begin(), c.end()
#define f2(i, n) for (int i = n - 1; i >= 0; i--)
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i <= n; ++i)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    fast

        int n,
        l;
    double kq = 0;
    cin >> n >> l;
    int a[n + 2];
    a[0] = 0;
    a[n + 1] = l;
    f1(i, n)
            cin >>
        a[i];
    sort(a, a + n + 1);
    double tg = a[1];
    kq = max(tg, kq);
    tg = l - a[n];
    kq = max(tg, kq);
    for (int i = 1; i < n; i++)
    {
        tg = (double)(a[i + 1] - a[i]) / 2;
        kq = max(tg, kq);
    }
    cout << fixed << setprecision(10) << kq;
    return 0;
}
