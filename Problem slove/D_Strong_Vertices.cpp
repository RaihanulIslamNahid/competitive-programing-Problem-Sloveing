#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        vector<int> b(n);
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int mx = -2000000000;
        for (int j = 0; j < n; j++)
        {
            mx = max(mx, a[j] - b[j]);
        }
        vector<int> ans;
        for (int j = 0; j < n; j++)
        {
            if (a[j] - b[j] == mx)
            {
                ans.push_back(j);
            }
        }
        int cnt = ans.size();
        cout << cnt << endl;
        for (int j = 0; j < cnt; j++)
        {
            cout << ans[j] + 1;
            if (j < cnt - 1)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}