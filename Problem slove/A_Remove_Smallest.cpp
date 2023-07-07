#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
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
#define f1(i, n) for (int i = 1; i < n; ++i)
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
read:
    while (t--)
    {
        ll n;
        cin >> n;
        int arr[n];
        f0(i, n)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        f1(i, n)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                cout << "NO"
                     << "\n";
                goto read;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}
