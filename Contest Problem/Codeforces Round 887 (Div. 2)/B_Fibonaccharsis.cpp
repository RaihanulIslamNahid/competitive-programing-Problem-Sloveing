#include <bits/stdc++.h>
using namespace std;
#define ll long long
void slove()
{
    long long a, k;
    cin >> a >> k;
    vector<ll> arr(40, 1);
    if (k > 40)
    {
        cout << 0 << endl;
        return;
    }
    long long vuban = 0;
    for (int j = 2; j <= 39; j++)
    {
        arr[j] = arr[j - 1] + arr[j - 2];
    }
    long long raihan = arr[k - 3];
    long long sharna = arr[k - 2];
    for (int i = 0; i <= a; i++)
    {
        long long x = sharna * i;
        long long s = a - x;
        if (s >= 0)
        {
            if (s % raihan == 0)
            {
                long long z = s / raihan;
                if (i >= z)
                    vuban++;
            }
        }
    }
    cout << vuban << endl;
}

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        slove();
    }
}
