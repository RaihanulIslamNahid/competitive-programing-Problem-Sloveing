#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
#include <vector>
#include <set>
#include<bits/stdc++.h>
using namespace std;
// define
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ss second
#define all(arr) sort(arr.begin(), arr.end());

#define sc(n) scanf("%d", &n);
#define scl(n) scanf("%lld", &n);
#define scd(n) scanf("%lf", &n);
#define pf(res) printf("%d\n", res);
#define pfl(res) printf("%lld\n", res);
#define pfd(res) printf("%lf\n", res);
#define endl "\n";
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i <= n; ++i)
#define f2(i, n) for (int i = n - 1; i >= 0; i--)
#define f3(i,n) for(int i=0;i<=n;i++)
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
    int n, ip;
    cin >> n >> ip;
    vector<int> vec(n + 1), vec1(n + 1, 0);
    f1(i,n)
    {
        int m;
        cin >> m;
        vec[i] = m;
        vec1[m]++;
    }

    int mex = -1;
    f3(i,n)
    {
        if (vec1[i] == 0)
        {
            mex = i;
            break;
        }
    }

    vec[0] = mex;
    ip %= (n + 1);

    f3(i,n)
    {
        if ((i + ip) <= n)
        {
            vec1[i + ip] = vec[i];
        }
        else
        {
            vec1[(i + ip) % (n + 1)] = vec[i];
        }
    }

    f1(i,n)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;
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