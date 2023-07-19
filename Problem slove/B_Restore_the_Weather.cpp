#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back({x, i});
        }

        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ans[n];
        while (!b.empty())
        {
            ans[a.back().second] = b.back();
            a.pop_back();
            b.pop_back();
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}