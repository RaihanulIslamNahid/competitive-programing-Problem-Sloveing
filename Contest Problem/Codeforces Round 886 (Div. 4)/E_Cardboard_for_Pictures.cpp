#include <bits/stdc++.h>
using namespace std;
#define ll long long int
signed main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        ll n, m;

        cin >> n >> m;
        ll sharna = 0, raihan = 0;
        ll sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> raihan;
            arr[i] = raihan;
            sharna += raihan * raihan;
            sum += raihan;
        }

        m -= sharna;
        m /= 4;
        m /= n;
        sum /= 2 * n;
        int ans = sqrt((sum * sum) + m);
        ans -= sum;
        cout << ans << endl;
    }
    return 0;
}