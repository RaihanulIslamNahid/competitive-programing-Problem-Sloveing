#include <algorithm>
#include <array>
#include <bits/stdc++.h>
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;
// define
#define ll long long
#define pi (3.141592653589)
// #define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ss second
#define all(arr) sort(arr.begin(), arr.end());
#define f2(i, n) for (int i = n - 1; i >= 0; i--)
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i <= n; ++i)
#define f3(i,n) for(int i=0;i<=n;i++)
#define f4(i,n) for(int i=0;i<n;i--)
#define f5(i,n) for(int i=0;i<=n;i--)
#define f6(i,n) for(int i=1;i<n;i--)
#define f7(i,n) for(int i=1;i<=n;i++)
#define fast \
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const int N = 2e5 + 9;
vector<int> g[N];
int a[N], n, k;
pair<int, int> dp[N];
// Prime

/*bool isPrime(int n) {
  if (n == 1)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}*/
// GCD
/*int gcd(int a, int b) {
  if (b == 0)
    return a;
  a %= b;
  return gcd(b, a);
}*/

void dbg_out() { cerr << endl; }

#ifdef NEAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// run_case
void run_case()
{
  // code Here
  int m;
  cin >> n >> m >> k;
  f1(i,n)
  {
    cin >> a[i];
    g[i].clear();
  }
  vector<int> in(n + 1, 0);
  while (m--)
  {
    int u, v;
    cin >> u >> v;
    g[u].pb(v);
    in[v]++;
  }
  for (int u = n; u >= 1; u--)
  {
    dp[u] = make_pair(1, a[u]);
    for (auto v : g[u])
    {
      if (a[u] <= a[v])
      {
        dp[u] = max(dp[u], dp[v]);
      }
      else
      {
        auto cur = dp[v];
        cur.first++;
        dp[u] = max(dp[u], cur);
      }
    }
  }
  multiset<pair<int, int>> days;
  multiset<int> st;
  vector<pair<int, int>> v;
  f1(i,n)
  {
    if (in[i] == 0)
    {
      st.insert(a[i]);
      days.insert(dp[i]);
      v.pb({a[i], i});
    }
  }
  auto get = [&](int day, int st, int en)
  {
    // cerr << day << ' ' << st << ' ' << en << '\n';
    return 1LL * (day - 1) * k + en - st;
  };
  ll ans = get((*days.rbegin()).first, *st.begin(), (*days.rbegin()).second);
  // cout << ans << ' ';
  all(v);
  for (auto [_,i] : v)
  {
    st.erase(st.find(a[i]));
    days.erase(days.find(dp[i]));
    if (!st.empty())
    {
      auto cur = dp[i];
      cur.first++;
      days.insert(cur);
      ll res = get((*days.rbegin()).first, *st.begin(), (*days.rbegin()).second);
      ans = min(ans, res);
      // cout << res << ' ';
    }
  }
  cout << ans << '\n';
}
// main
int32_t main()
{
  ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
  cin.tie(nullptr);
#endif

  int tests;
  cin >> tests;

  while (tests-- > 0)
    run_case();
}