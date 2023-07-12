#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << a + b + c - min({a, b, c}) - max({a, b, c}) << endl;
    }
    return 0;
}
/*---------- Who Am I ? -----------*/
/*----- No System Is Safe -------*/