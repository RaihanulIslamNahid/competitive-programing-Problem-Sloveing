#include <bits/stdc++.h>
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

        int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int aa = a, bb = b, cc = c;
        if (max(b, c) < a)
            aa = 0;
        else
            aa = max(b, c) - a + 1;
        if (max(a, c) < b)
            bb = 0;
        else
            bb = max(a, c) - b + 1;
        if (max(b, a) < c)
            cc = 0;
        else
            cc = max(b, a) - c + 1;
        cout << aa << " " << bb << " " << cc << "\n";
    }
    return 0;
}
