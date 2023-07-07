#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int caps = 0, notcaps = 0;
    for(auto &x: s)
    {
        if(x >= 'A' && x <= 'Z') caps++;
        else notcaps++;
    }

    if(caps == n || (notcaps == 1 && s[0] >= 'a'))
    {
        for(int i = 0; i < n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
            else
            {
                s[i] = s[i] - 32;
            }
        }
    }
    cout << s << endl;
    
    return 0;
}