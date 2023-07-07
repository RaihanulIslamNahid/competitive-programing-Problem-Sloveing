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
        int a, b;
        cin >> a >> b;
        int arr1[a];
        int arr2[a];
        int sum = 0;
        f0(i, a)
        {
            cin >> arr1[i];
            sum += arr1[i];
        }
        f0(i, a)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + a);
        sort(arr2, arr2 + a);
        reverse(arr2, arr2 + a);
        int ans = 0;
        f0(i, a)
        {
            if (arr1[i] < arr2[i])
            {
                swap(arr1[i], arr2[i]);
                ans++;
                if (ans == b)
                {
                    break;
                }
            }
        }

        int sum2 = 0;
        f0(i, a)
        {
            sum2 += arr1[i];
        }

        if (b == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum2 << endl;
        }
    }
    return 0;
}
