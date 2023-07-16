#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << '\n';
        }
        else
        {
            n -= n % 10;
            while (n % 7 != 0)
                ++n;
            cout << n << '\n';
        }
    }
    return 0;
}
/*---------- Who Am I ? -----------*/
/*----- No System Is Safe -------*/