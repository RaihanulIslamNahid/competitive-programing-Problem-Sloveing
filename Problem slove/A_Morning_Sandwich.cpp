#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ans = x + y;
        if ((n - 1) >= ans)
        {
            cout << ans + ans + 1 << endl;
        }
        else
        {
            cout << n + n - 1 << endl;
        }
    }
}