#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        vector<int> x;
        int cnt = 0;
        while (q--)
        {
            int num;
            cin >> num;
            if (x.empty())
            {
                x.push_back(num);
                cnt = 1;
                cout << 1;
                continue;
            }
            int new_cnt = cnt;
            new_cnt -= x.back() <= x[0];
            new_cnt += x.back() <= num;
            new_cnt += num <= x[0];
            if (new_cnt >= (int)x.size())
            {
                cnt = new_cnt;
                x.push_back(num);
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << '\n';
    }
}
