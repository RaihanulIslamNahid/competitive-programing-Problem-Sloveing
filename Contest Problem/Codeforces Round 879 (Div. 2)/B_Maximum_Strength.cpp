#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string L, R;
        cin >> L >> R;
        L = string(R.size() - L.size(), '0') + L;
        int N = R.size();
        int p = 0;
        while (p < N - 1)
        {
            if (L[p] == R[p])
            {
                p++;
            }
            else
            {
                break;
            }
        }
        int ans = R[p] - L[p];
        ans += (N - 1 - p) * 9;
        cout << ans << endl;
    }
}