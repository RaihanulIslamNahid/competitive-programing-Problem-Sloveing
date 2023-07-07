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
        int n, m;
        cin >> n >> m;

        int left = 0, right = 0, x = 0;
        vector<int> a(n);
        set<int> later;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
            {
                left++;
            }
            else if (a[i] == -2)
            {
                right++;
            }
            else
            {
                later.insert(a[i]);
            }
        }
        x = later.size();

        int ans = max(left + x, right + x);
        int taken = 0;
        for (auto i : later)
        {
            int leftPut = min(left, i - (taken + 1));
            int rightPut = min(right, m - i - x + (taken + 1));
            ans = max(ans, leftPut + rightPut + x);
            ++taken;
        }
        ans = min(ans, m);
        cout << ans << endl;
    }
    return 0;
}
