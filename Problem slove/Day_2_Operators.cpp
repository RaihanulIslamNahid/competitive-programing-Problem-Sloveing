#include <iostream>
#include <cmath>
using namespace std;
void solve(double meal_cost, int tm, int tp)
{
    double tt = meal_cost * (static_cast<double>(tm) / 10x0);
    double aa = meal_cost * (static_cast<double>(tp) / 100);

    double ta = meal_cost + tt + aa;

    int at = static_cast<int>(round(ta));

    cout << at << std::endl;
}

int main()
{
    double mm;
    int tm, tp;
    cin >> mm >> tm >> tp;

    solve(mm, tm, tp);

    return 0;
}
