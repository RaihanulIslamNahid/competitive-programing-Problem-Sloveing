#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n * (n - 1) / 2);
        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        for (int i = 0; i < n - 1; i++)
        {
            cout << a[(n - 1 + n - i) * i / 2] << " ";
        }
        cout << a.back() << "\n";
    }
}