#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    if (n < 3)
    {
        cout << 0 << endl;
    }

    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            int idx1 = i;
            int idx2 = i + 1;
            int idx3 = i + 2;
            if (s[idx1] == 'x' && s[idx2] == 'x' && s[idx3] == 'x')
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}