// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4.1,sse4.2,sse4a,avx,avx2,popcnt,tune=native")
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <climits>
using namespace std;

#ifdef LOCAL
#define eprintf(...)                  \
    {                                 \
        fprintf(stderr, __VA_ARGS__); \
        fflush(stderr);               \
    }
#else
#define eprintf(...) 42
#endif

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B)
{
    return (ull)rng() % B;
}

#define mp make_pair
#define all(x) (x).begin(), (x).end()

clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

ll floor_div(ll x, ll y)
{
    assert(y != 0);
    if (y < 0)
    {
        y = -y;
        x = -x;
    }
    if (x >= 0)
        return x / y;
    return (x + 1) / y - 1;
}
ll ceil_div(ll x, ll y)
{
    assert(y != 0);
    if (y < 0)
    {
        y = -y;
        x = -x;
    }
    if (x <= 0)
        return x / y;
    return (x - 1) / y + 1;
}

void solve()
{
    ll s, n;
    scanf("%lld%lld", &s, &n);
    ll ans = s * n;
    s += s % 10;
    n--;
    ans = max(ans, s * n);
    if (s % 10 == 0)
    {
        printf("%lld\n", ans);
        return;
    }
    for (int i = 0; n > 0 && i < 4; i++)
    {
        // (s + 20k)(n - 4k) = sn + (20n-4s)k - 80kk
        ans = max(ans, s * n);
        ll k = (20 * n - 4 * s) / 160;
        for (ll m = max(0LL, k - 2); m <= k + 2; m++)
        {
            ll ss = s + 20 * m, nn = n - 4 * m;
            if (nn < 0)
                break;
            ans = max(ans, ss * nn);
        }
        s += s % 10;
        n--;
    }
    printf("%lld\n", ans);
}

int main()
{
    startTime = clock();
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);

    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        eprintf("--- Case #%d start ---\n", i);
        // printf("Case #%d: ", i);

        solve();

        // printf("%lld\n", (ll)solve());

        /*
        if (solve()) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        */

        eprintf("--- Case #%d end ---\n", i);
        eprintf("time = %.5lf\n", getCurrentTime());
        eprintf("++++++++++++++++++++\n");
    }

    return 0;
}
