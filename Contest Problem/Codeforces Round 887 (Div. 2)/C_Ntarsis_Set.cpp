#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr;

int n, k;
bool Slove(int mid)
{
    int cn = 0;
    for (int i = 0; i < k; i++)
    {
        int l = upper_bound(arr.begin(), arr.end(), mid) - arr.begin();
        l--;
        if (l < 0)
        {
            if (arr[0] == 1)
                mid--;
        }
        else
        {
            l++;
            mid -= (l - 1);
        }
    }

    if (mid <= 0)
        return 0;
    return 1;
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        arr.resize(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int sharna = 1, Raihan = 1e18;
        int ans = Raihan;

        while (sharna <= Raihan)
        {
            int mid = (sharna + Raihan) / 2;
            if (Slove(mid))
            {
                Raihan = mid - 1;
                ans = mid;
            }
            else
            {
                sharna = mid + 1;
            }
        }
        cout << ans << endl;
    }
}