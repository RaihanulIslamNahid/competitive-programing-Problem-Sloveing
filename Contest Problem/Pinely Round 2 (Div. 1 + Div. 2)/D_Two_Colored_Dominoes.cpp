#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
#include <vector>
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
  int n, m;
  cin >> n >> m;
  vector<vector<char> > g(n, vector<char>(m));
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> g[i][j];
    }
  }
  vector<vector<int>> L(m), U(n);
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      if (g[i][j] == 'L')
      {
        L[j].push_back(i);
      }
      else if (g[i][j] == 'U')
      {
        U[i].push_back(j);
      }
    }
  }
  bool ok = true;
  for (const auto &l : L)
  {
    if (l.size() & 1)
    {
      ok = false;
      break;
    }
  }
  for (const auto &u : U)
  {
    if (u.size() & 1)
    {
      ok = false;
      break;
    }
  }
  if (!ok)
  {
    cout << -1 << endl;
    return;
  }
  f0(j, m)
  {
    for (int k = 0; k < L[j].size(); k += 2)
    {
      int i1 = L[j][k];
      int i2 = L[j][k + 1];
      g[i1][j] = 'W';
      g[i2][j] = 'B';
      g[i1][j + 1] = 'B';
      g[i2][j + 1] = 'W';
    }
  }
  f0(i, n)
  {
    for (int k = 0; k < U[i].size(); k += 2)
    {
      int j1 = U[i][k];
      int j2 = U[i][k + 1];
      g[i][j1] = 'W';
      g[i][j2] = 'B';
      g[i + 1][j1] = 'B';
      g[i + 1][j2] = 'W';
    }
  }
  for (const auto &row : g)
  {
    for (char c : row)
    {
      cout << c;
    }
    cout << '\n';
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