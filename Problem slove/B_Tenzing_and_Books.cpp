#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        int p = 0;
        for (int j = 0; j < n; j++)
        {
            if ((x | a[j]) == x)
            {
                p |= a[j];
            }
            else
            {
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if ((x | b[j]) == x)
            {
                p |= b[j];
            }
            else
            {
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if ((x | c[j]) == x)
            {
                p |= c[j];
            }
            else
            {
                break;
            }
        }
        if (p == x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
