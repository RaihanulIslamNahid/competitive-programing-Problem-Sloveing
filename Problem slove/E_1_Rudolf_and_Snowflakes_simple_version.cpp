#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        bool ok = 0;
        for (int j = 2; j * j <= n; j++)
        {
            int s = j * j + j + 1;
            while (s <= n)
            {
                if (s == n)
                {
                    ok = 1;
                }
                s = s * j + 1;
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}