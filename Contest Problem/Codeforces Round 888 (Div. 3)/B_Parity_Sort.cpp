#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m, k;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> odd;
        vector<long long> even;
        vector<long long> arr1;
        bool b = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] & b)
            {
                odd.pb(arr[i]);
            }
            else
            {
                even.pb(arr[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        ll odd1 = 0, even1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] & b)
            {
                arr1.pb(odd[odd1]);
                ++odd1;
            }
            else
            {

                arr1.pb(even[even1]);
                ++even1;
            }
        }
        int a = is_sorted(arr1.begin(), arr1.end());
        if (a)
            cout
                << "YES\n";
        else
            cout << "NO\n";
    }
}