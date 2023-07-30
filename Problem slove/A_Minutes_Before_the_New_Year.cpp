#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int k = 24 * 60;
        int q = (h * 60) + m;
        int res = k - q;
        cout << res << endl;
    }
}