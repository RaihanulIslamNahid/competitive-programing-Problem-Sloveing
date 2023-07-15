#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        char b;
        cin >> b;
        int c;
        cin >> c;
        if (b == '+')
        {
            cout << a + c << endl;
                }
        else
        {
            cout << a - c;
        }
    }
}