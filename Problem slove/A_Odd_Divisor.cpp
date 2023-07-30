#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x = log2(n);
        long long num = 1;
        for (int i = 0; i < x; ++i)
        {
            num *= 2;
        }
        if (num == n or n < 3)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}