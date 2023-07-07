#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    long long x = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      x += a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
      x -= b[i];
    }
    cout << (x > 0 ? "Tsondu" : (x == 0 ? "Draw" : "Tenzing")) << '\n';
  }
  return 0;
}
