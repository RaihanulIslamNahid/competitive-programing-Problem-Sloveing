#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int a = 8;
        char arr[a][a];
        string sharna = " ";
        int i, j;
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
                {
                    sharna += arr[i][j];
                }
            }
        }
        cout << sharna << "\n";
    }
}
