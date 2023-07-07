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
    fast int n, k;
    cin >> n >> k;
    int arr[n + 1];
    arr[0] = 0;
    f1(i, n)
    {
        arr[i] = i;
        arr[i] = arr[i] * 5;
    }
    int count = 0;
    int c = k;
    f1(i, n)
    {
        if (c <= 240)
        {
            c += arr[i];
            if (c > 240)
            {
                break;
            }
            count++;
        }
    }
    cout << count << endl;

    //}
    return 0;
}
