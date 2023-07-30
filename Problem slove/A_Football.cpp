#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int goalTeam1 = 1, goalTeam2 = 0;
    string S, team1, team2;
    cin >> team1;

    while (cin >> S)
        if (S == team1)
            goalTeam1++;
        else
        {
            team2 = S;
            goalTeam2++;
        }

    if (goalTeam1 > goalTeam2)
        cout << team1;
    else
        cout << team2;

    return 0;
}