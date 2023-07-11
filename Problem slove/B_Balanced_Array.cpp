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
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i < n; ++i)
#define f2(i, n) for (int i = 1; i <= n; ++i)
#define f3(i, n) for (int i = n - 1; i >= 0; i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

/* Main */
int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[10000];
        vector<int> v;
        vector<int> v1;
        int sum = 0, sum1 = 0, sz = 0, cnt = 0, cnt1 = 0;
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                v.push_back(i);
                sum = sum + i;
                cnt++;
            }
            else
            {
                v1.push_back(i);
                sum1 = sum1 + i;
                cnt1++;
            }
        }

        sz = sum - sum1;
        if ((sum - sum1) % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < cnt; i++)
            {
                cout << v[i] << ' ';
            }
            for (int i = 0; i < cnt1 - 1; i++)
            {
                cout << v1[i] << ' ';
            }
            cout << v1[cnt1 - 1] + sz << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}