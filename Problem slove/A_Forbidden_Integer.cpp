#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define endl cout << "\n"
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES";
            endl;
            cout << n;
            endl;
            f1(i, n) cout << 1 << ' ';
            endl;
        }
        else
        {
            if (k == 1)
            {
                cout << "NO";
                endl;
            }
            else
            {
                if (k == 2)
                {
                    if (n % 2)
                        cout << "NO", endl;
                    else
                    {
                        cout << "YES";
                        endl;
                        cout << n / 2, endl;
                        f1(i, n / 2) cout << 2 << ' ';
                        endl;
                    }
                }
                else
                {
                    if (n == 1)
                        cout << "NO", endl;
                    else
                    {
                        cout << "YES";
                        endl;
                        cout << n / 2, endl;
                        if (n % 2)
                            cout << 3, n -= 3;
                        else
                            cout << 2, n -= 2;
                        f1(i, n / 2) cout << ' ' << 2;
                        endl;
                    }
                }
            }
        }
    }
    return 0;
}
