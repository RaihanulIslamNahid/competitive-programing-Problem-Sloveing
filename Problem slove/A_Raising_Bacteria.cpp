#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    if (n > 0)
    {
        if (n % 2 == 1)
        {
            ans++;
        }
        n /= 2;
    }
    cout << ans << endl;
}