#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int total_checked = 1;
    int counts1 = 0, counts2 = 0, counts3 = 0;
    for (int i = 0; i < n; i++)
    {
        total_checked++;
        if (s[i] == 'A')
            counts1++;
        else if (s[i] == 'B')
            counts2++;
        else if (s[i] == 'C')
        {
            counts3++;
        }
        if (counts1 > 0 && counts2 > 0 && counts3 > 0)
        {
            cout << total_checked;
        }
    }
}