#include <iostream>
#include <vector>
#include <string>

using namespace std;

int max_consecutive_free_days(int N, int D, const vector<string> &schedules)
{
    int max_consecutive_days = 0;

    for (int day = 0; day < D; ++day)
    {
        bool all_free = true;
        for (int person = 0; person < N; ++person)
        {
            if (schedules[person][day] == 'x')
            {
                all_free = false;
                break;
            }
        }

        if (all_free)
        {
            int consecutive_days = 1;
            while (day + consecutive_days < D)
            {
                bool all_free_next_day = true;
                for (int person = 0; person < N; ++person)
                {
                    if (schedules[person][day + consecutive_days] == 'x')
                    {
                        all_free_next_day = false;
                        break;
                    }
                }

                if (all_free_next_day)
                {
                    consecutive_days++;
                }
                else
                {
                    break;
                }
            }

            max_consecutive_days = max(max_consecutive_days, consecutive_days);
        }
    }

    return max_consecutive_days;
}

int main()
{
    int N, D;
    cin >> N >> D;

    vector<string> schedules(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> schedules[i];
    }

    int result = max_consecutive_free_days(N, D, schedules);
    cout << result << endl;

    return 0;
}
