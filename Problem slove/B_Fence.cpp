#include <bits/stdc++.h>
using namespace std;

long a[2000000];

int main()
{
    long n, k, i, j, min, mi;

    cin >> n >> k;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0, j = 0; i < k; i++)
    {
        j += a[i];
    }
    min = k - 1;
    mi = j;
    for (i = k; i < n; i++)
    {
        j += a[i];
        j -= a[i - k];
        if (j < mi)
        {
            mi = j;
            min = i;
        }
    }

    cout << min + 2 - k << endl;
    return 0;
}