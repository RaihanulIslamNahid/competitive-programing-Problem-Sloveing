#include <bits/stdc++.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string t;
        for (int i = n - 1; ~i; --i)
        {
            if (s[i] == '0')
            {
                t += (s[i - 2] - '0') * 10 + (s[i - 1] - '0') + 'a' - 1;
                i -= 2;
            }
            else
                t += (int)(s[i] - '0' + 'a' - 1);
        }
        reverse(t.begin(), t.end());
        cout << t;
        cout << endl;
    }
    return 0;
}
/*---------- Who Am I ? -----------*/
/*----- No System Is Safe -------*/