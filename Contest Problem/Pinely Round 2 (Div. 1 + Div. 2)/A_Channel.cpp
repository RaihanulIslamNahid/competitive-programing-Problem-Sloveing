#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;
// define
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ss second
// #define all(arr) sort(arr.begin(), arr.end());
#define all(v) v.begin(), v.end()
#define f2(i, n) for (int i = n - 1; i >= 0; i--)
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i <= n; ++i)
#define fast \
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

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
    ll n, a, q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    if (n == a)
        cout << "YES" << endl;
    else
    {
        bool fu = 0, fn = 0;
        ll ic = a;
        for (ll i = 0; i < q; i++)
        {
            if (s[i] == '+')
                a++;
            else
                a--;
            if (a == n)
            {
                fu = 1;
                break;
            }
        }
        reverse(all(s));
        for (ll i = 0; i < q; i++)
        {
            if (s[i] == '+')
                ic++;
            else
                a--;
            if (ic == n)
            {
                fn = 1;
                break;
            }
        }

        if (fu && fn)
            cout << "YES" << endl;
        else if (!fu && !fn)
            cout << "NO" << endl;
        else
            cout << "MAYBE" << endl;
    }
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