#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0, op = 0;
        bool raihan = false;
        long long cons = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
            {
                sum += abs(arr[i]);
            }
            if (raihan)
            {
                if (i == n || arr[i] > 0)
                {
                    op++;
                    raihan = false;
                }
            }
            else
            {
                if (arr[i] < 0)
                {
                    raihan = true;
                }
            }
        }
        cout << sum << " " << op << endl;
    }
}