#include <bits/stdc++.h>
using namespace std;
const int INF = 1000000;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string S;
        cin >> S;
        string T;
        cin >> T;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (S[i] != T[i])
            {
                a++;
            }
            if (S[i] != T[n - 1 - i])
            {
                b++;
            }
        }
        int ans = INF;
        ans = min(ans, a / 2 * 4 + a % 2);
        b = max(b, 1);
        ans = min(ans, (b - 1) / 2 * 4 + (b - 1) % 2 + 2);
        cout << ans << endl;
    }
}