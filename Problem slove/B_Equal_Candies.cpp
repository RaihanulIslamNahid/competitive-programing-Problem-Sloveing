#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll mm = INT_MAX;
        for (int i = 0; i < n; i++)
            mm = min(mm, arr[i]);
        ll ans = 0;
        for (int i = 0; i < n; i++)
            ans += max(0 * 1ll, arr[i] - mm);

        cout << ans << endl;
    }
}