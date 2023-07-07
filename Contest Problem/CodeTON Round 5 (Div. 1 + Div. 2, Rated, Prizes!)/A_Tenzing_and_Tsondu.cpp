#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int  v[n];
        int b[m];

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum1 += v[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
            sum2 += b[i];
        }

        for (int i = 0; i < n; i++) {
            sum1 += v[i];
        }

        for (int i = 0; i < m; i++) {
            sum2 += b[i];
        }

        if (sum1 == sum2) {
            cout << "Draw" << endl;
        } else if (sum1 > sum2) {
            cout << "Tsondu" << endl;
        } else {
            cout << "Tenzing" << endl;
        }
    }

    return 0;
}
