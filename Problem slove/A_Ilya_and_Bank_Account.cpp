#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b = 0, c = 0;
    cin >> a;
    int d = abs(a);
    vector<int> v;
    if (a > 0)
    {
        cout << a;
    }
    else if (a == (-10) || a == -20 || a == -30 || a == -40 || a == -50 || a == -60 || a == -70 || a == -80 || a == -90)
    {
        cout << 0;
    }

    else
    {
        while (d > 0)
        {
            b = d % 10;
            v.push_back(b);
            d = d / 10;
        }
        if (v[0] > v[1])
        {
            cout << '-';
            for (int i = v.size() - 1; i >= 1; i--)
            {
                cout << v[i];
            }
        }
        else
        {
            cout << '-';
            for (int i = v.size() - 1; i >= 2; i--)
            {
                cout << v[i];
            }
            cout << v[0];
        }
    }
}