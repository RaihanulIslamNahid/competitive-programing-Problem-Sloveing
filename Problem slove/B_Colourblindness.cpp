#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        string s, s1;
        cin >> s >> s1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s1[i])
            {
                if (s[i] == 'R' || s1[i] == 'R')
                {
                    sum = 1;
                }
            }
        }
        if (sum == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}