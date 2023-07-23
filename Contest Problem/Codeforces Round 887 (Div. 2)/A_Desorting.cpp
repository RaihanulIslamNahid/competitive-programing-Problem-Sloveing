#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc = 1;
    cin >> tc;
    for (int j = 0; j < tc; j++)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr1[i] = arr[i];
        }
        sort(arr1, arr1 + n);
        bool sharna = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr1[i])
            {
                cout << 0 << endl;
                sharna = 1;
                break;
            }
        }
        if (sharna == 0)
        {
            int raihan = INT_MAX;
            int count;
            for (int i = 0; i < n - 1; i++)
            {
                if ((arr[i + 1] - arr[i]) < raihan)
                {
                    raihan = arr[i + 1] - arr[i];
                    count = i;
                }
            }
            cout << ((arr[count + 1] - arr[count]) / 2) + 1 << endl;
        }
    }
}
