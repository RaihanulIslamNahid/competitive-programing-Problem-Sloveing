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
        int z = n / 3;
        int x = n % 3;
        int ans = z;
        int ans1 = z;
        if (x == 1)
        {
            ans++;
        }
        if (x == 2)
        {
            ans1++;
        }
        cout << ans << " " << ans1 << endl;
    }
}