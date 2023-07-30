#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        int raihan = n - 3;
        cout << raihan / 2 + 1 << endl;
        for (int i = 0; i < raihan / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
}