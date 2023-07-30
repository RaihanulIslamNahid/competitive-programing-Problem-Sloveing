#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i < 5000; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            if (j == i - 1)
            {
                if (i == m)
                    printf("YES");
                else
                    printf("NO");
                return 0;
            }
        }
    }
}
