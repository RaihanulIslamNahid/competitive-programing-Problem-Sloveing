#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc = 1;
    cin >> tc;
    for (int j = 0; j < tc; j++)
    {
        int n, raihan = 0, sharna = 0;
        cin >> n;
        int i = 1;
        while (i <= n)
        {
            int n, m;
            cin >> n >> m;
            if (n < 11)
            {
                if (sharna < m)
                {
                    raihan = i;
                    sharna = m;
                }
            }
            i++;
        }
        cout << raihan << '\n';
    }
    return 0;
}