#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = n;
        int c = 0;
        while (n > 0)
        {
            n /= 10;
            c++;
        }
        n = m;
        int d = c - 1;
        d *= 9;
        for (int i = 1; i <= 9; i++)
        {
            int p = 0;
            int q = 0;
            while (p < c)
            {
                p++;
                q = (q * 10) + i;
                // p++;
            }
            if (q <= n)
            {
                d++;
            }
            else
                break;
        }
        cout << d << endl;
    }
}