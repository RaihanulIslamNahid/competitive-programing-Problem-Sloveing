#include <bits/stdc++.h>
using namespace std;
void slove()
{
    int n, m, k, a, b;
    cin >> n >> m >> k >> a >> b;
    bool ans = 1;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        int raihan = abs(a - x);
        int sharna = abs(b - y);
        int sum = raihan + sharna;
        if (sum % 2 == 0)
        {
            ans = 0;
        }
    }
    if (ans == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}