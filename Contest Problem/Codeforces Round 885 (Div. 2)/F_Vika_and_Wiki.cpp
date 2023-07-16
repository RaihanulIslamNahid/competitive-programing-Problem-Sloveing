#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a == vector(n, 0))
    {
        cout << 0 << "\n";
        return 0;
    }

    int ans = 1;
    for (int i = n / 2; i > 0; i /= 2)
    {
        vector<int> b(n);
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j] ^ a[(i + j) % n];
        }
        if (b != vector(n, 0))
        {
            a = move(b);
            ans += i;
        }
    }
    std::cout << ans << "\n";

    return 0;
}
