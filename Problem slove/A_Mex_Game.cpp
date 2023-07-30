#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (s[i] == 'A')
            count++;
        else
            count--;
        if (!i)
            continue;
        if (count >= 0)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
}