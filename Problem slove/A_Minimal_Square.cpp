#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        cin >> a >> b;
        ll min_v = min(a, b);
        ll max_v = max(a, b);
        ll ans = max(min_v * 2, max_v);
        cout << ans * ans << endl;
    }
}