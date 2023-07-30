#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int fra[a + 3] = {0};

        int frb[b + 3] = {0};

        int aa[k + 1], bb[k + 1];

        for (int i = 0; i < k; i++)
        {
            cin >> aa[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> bb[i];
        }

        ll ans = 0;

        for (int i = 0; i < k; i++)
        {
            ans += i - fra[aa[i]] - frb[bb[i]];
            fra[aa[i]]++, frb[bb[i]]++;
        }

        cout << ans << endl;
    }
}
