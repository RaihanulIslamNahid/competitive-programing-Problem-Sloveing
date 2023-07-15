#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    c = 0;
    for (b = 1; b <= a / 2; b++)
    {
        if (a % b == 0)
        {
            c++;
        }
    }
    cout << c;
}