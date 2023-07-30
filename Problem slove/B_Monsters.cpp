#include <iostream>
#include <vector>
using namespace std;

int minimumCoins(vector<int> &arr)
{
    int coins = 0;
    int n = arr.size();

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else if (arr[i] == 1)
        {
            coins += 1;
        }
        else if (arr[i] == 2)
        {
            if (i > 0 && arr[i - 1] > 0)
            {
                arr[i - 1] -= 1;
                coins += 1;
            }
            else
            {
                if (i + 1 < n)
                {
                    arr[i + 1] -= 1;
                    coins += 1;
                }
                else
                {
                    coins += 1;
                }
            }
        }
    }

    return coins;
}

int main()
{
    int t;
    cin>>
    vector<int> arr;
    int minCoins = minimumCoins(arr);
    cout << minCoins << endl;
    // return 0;
}
