#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
            {
                cnt++;
            }
        }
        int ans = n;
        for (int i = 0; i <= n; i++)
        {
            if (i <= n - i && i % 2 == 0)
            {
                ans = min(ans, abs(cnt - i));
            }
        }
        cout << ans << endl;
    }
}