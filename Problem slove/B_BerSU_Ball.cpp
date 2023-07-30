#include <iostream>

using namespace std;

int main()
{
    int n;
    // taking inputs of n (boys)
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    // taking inputs of m (girls)
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int temp1 = 0;
    int temp2 = 0;
    int sum = 0;
    // Sorting an array in ascending order for boys
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // If there is a smaller element found on right of the array then swap it.
            if (a[j] < a[i])
            {
                temp1 = a[i];
                a[i] = a[j];
                a[j] = temp1;
            }
        }
    }

    // Sorting an array in ascending order for girls
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {

            if (b[j] < b[i])
            {
                temp2 = b[i];
                b[i] = b[j];
                b[j] = temp2;
            }
        }
    }

    // thats our main condition of the code

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] || a[i] + 1 == b[j] || a[i] - 1 == b[j])
            {

                sum += 1;
                b[j] = -2;
                break;
            }
        }
    }

    cout << sum << endl;
    return 0;
}