#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long y = x / 2020;
        long long z = x % 2020;
        if (z <= y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}