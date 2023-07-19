#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        string ss = "codeforces";
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != ss[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}