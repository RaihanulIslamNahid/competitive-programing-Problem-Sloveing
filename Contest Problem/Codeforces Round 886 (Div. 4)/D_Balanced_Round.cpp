#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sharna = 0, raihan = 0;
        for (int i = 1; i < n; i++)
        {
            int d = arr[i] - arr[i - 1];
            if (d <= k)
            {
                sharna++;
            }
            else
            {
                sharna = 0;
            }
            raihan = max(raihan, sharna);
        }
        raihan++;
        cout << (n - raihan) << endl;
    }
}
