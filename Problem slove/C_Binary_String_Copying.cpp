#include <bits/stdc++.h>
using namespace std;
#define long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> zero_count(n + 1, 0), one_count(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            zero_count[i] = zero_count[i - 1] + (s[i - 1] == '0');
            one_count[i] = one_count[i - 1] + (s[i - 1] == '1');
        }
        set<string> ans;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            int zero = zero_count[b] - zero_count[a - 1];
            int one = one_count[b] - one_count[a - 1];
            string sub = "";
            sub.append(zero, '0').append(one, '1');
            ans.insert(s.substr(0, a - 1) + sub + s.substr(b));
        }
        cout << ans.size() << endl;
    }
    return 0;
}
