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
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool raihan = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                x++;
            if (s[i] == 'R')
                y++;
            if (s[i] == 'L')
                y--;
            if (s[i] == 'D')
                x--;
            if (x == 1 and y == 1)
            {
                raihan = true;
                break;
            }
        }
        if (raihan)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
