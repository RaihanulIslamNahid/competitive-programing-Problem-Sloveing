#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int n;
        cin >> n;
        int maxr = max(a, max(b, c));
        int s = a + b + c + n;
        if (s % 3 == 0 && s / 3 >= maxr)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}