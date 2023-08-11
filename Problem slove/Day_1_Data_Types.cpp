#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;
int main()
{
    int i;
    double d;
    string s;

    cin >> i;
    cin >> d;
    cin.ignore();
    getline(cin, s);

    cout << i + 4 << endl;


    cout << fixed << setprecision(1) << d + 4.0 << endl;


    cout << "HackerRank " << s << endl;

    return 0;
}
