#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, at;
    cin >> n;
    at = n;
    if ((n == 0) || (n == 1) || (n == 3))
    {
        cout << "yes";
        exit(0);
    }
    while ((at % 6) != 0)
    {
        at--;
    }

    if (n == at)
        cout << "yes";
    else if (((at + 1) == n) || ((at + 3) == n) || ((at + 6) == n))
        cout << "yes";
    else
        cout << "no";
}