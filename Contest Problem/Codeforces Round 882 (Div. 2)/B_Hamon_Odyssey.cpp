#include <bits/stdc++.h>
using namespace std;

#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ss second
#define all(c) c.begin(), c.end()
#define f2(i, n) for (int i = n - 1; i >= 0; i--)
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i <= n; ++i)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

/* Prime Number */
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

/*==Sieve of Eratosthenes==*/
int prime(long long n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

/* Main */
int32_t main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        int x = (1 << 30) - 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            x &= a[i];
        }
        if (x)
        {
            cout << 1 << '\n';
        }
        else
        {
            int ans = 0;
            x = (1 << 30) - 1;
            for (int i = 1; i <= n; i++)
            {
                x &= a[i];
                if (x == 0)
                {
                    ++ans;
                    x = (1 << 30) - 1;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
