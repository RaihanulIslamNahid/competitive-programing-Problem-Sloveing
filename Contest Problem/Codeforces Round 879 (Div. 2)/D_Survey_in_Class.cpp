#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int mod = (int)1000000007;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<ll, ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }

        sort(a.begin(), a.end(), [&](pair<ll, ll> x, pair<ll, ll> y)
             { return (x.second < y.second); });

        ll ans = LLONG_MIN;

        for (int i = 1; i < n; i++)
        {
            ll here = LLONG_MIN;
            ll len = a[i].second - a[i].first + 1LL;
            here = len;
            if (a[0].second < a[i].first)
            {
                here += len;
            }
            else
            {
                ll inside = a[0].second - max(a[i].first, a[0].first) + 1LL;
                here -= inside;
                here += (len - inside);
            }
            ans = max(ans, here);
        }

        sort(a.begin(), a.end(), [&](pair<ll, ll> x, pair<ll, ll> y)
             { return (x.first < y.first); });

        for (int i = 0; i < n - 1; i++)
        {
            ll here = LLONG_MIN;
            ll len = a[i].second - a[i].first + 1LL;
            here = len;
            if (a[n - 1].first > a[i].second)
            {
                here += len;
            }
            else
            {
                ll inside = min(a[n - 1].second, a[i].second) - a[n - 1].first + 1LL;
                here -= inside;
                here += (len - inside);
            }
            ans = max(ans, here);
        }

        ll mnLen = LLONG_MAX;
        int id;

        for (int i = 0; i < n; i++)
        {
            if (a[i].second - a[i].first + 1 < mnLen)
            {
                mnLen = a[i].second - a[i].first + 1LL;
                id = i;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (i == id)
                continue;
            ll len = a[i].second - a[i].first + 1LL;
            if (a[id].second < a[i].first or a[id].first > a[i].second)
            {
                ans = max(ans, 2LL * (a[i].first - a[i].second + 1LL));
            }
            else
            {
                if (a[id].first >= a[i].first and a[id].second <= a[i].second)
                {
                    ll here = abs(a[i].first - a[i].second) + 1LL;
                    ll inside = a[id].second - a[id].first + 1LL;
                    here -= inside;
                    here += (len - inside);
                    ans = max(ans, here);
                }
                else if (a[id].first < a[i].first)
                {
                    ll here = abs(a[i].first - a[i].second) + 1LL;
                    ll inside = a[id].second - max(a[i].first, a[id].first) + 1LL;
                    here -= inside;
                    here += (len - inside);
                    ans = max(ans, here);
                }
                else
                {
                    ll here = abs(a[i].first - a[i].second) + 1LL;
                    ll inside = min(a[id].second, a[i].second) - a[id].first + 1LL;
                    here -= inside;
                    here += (len - inside);
                    ans = max(ans, here);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
