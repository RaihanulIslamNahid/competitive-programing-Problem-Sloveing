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
string decimalToBase9(int decimal)
{
    string result = "";

    // special case for input 0
    if (decimal == 0)
    {
        result = "0";
    }
    else
    {
        // convert decimal to base-9 using modulo operator and integer division
        while (decimal != 0)
        {
            int digit = decimal % 9;
            result = to_string(digit) + result;
            decimal /= 9;
        }
    }

    return result;
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
        string s = decimalToBase9(n);
        for (auto x : s)
        {
            if (x > '3')
            {
                int k = x - '0';
                cout << k + 1;
            }
            else
                cout << x;
        }
    }
    return 0;
}
