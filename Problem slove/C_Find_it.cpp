#include <iostream>
#include <vector>

using namespace std;

vector<int> find_directed_cycle(int N, vector<int> &A)
{
    vector<bool> visited(N + 1, false);
    vector<int> cycle;

    auto dfs = [&](int v)
    {
        visited[v] = true;
        cycle.push_back(v);
        int next_vertex = A[v];

        if (!visited[next_vertex])
        {
            dfs(next_vertex);
        }
        else if (next_vertex == cycle[0])
        {
            return;
        }
        else
        {
            while (cycle[0] != next_vertex)
            {
                cycle.erase(cycle.begin());
            }
            cycle.push_back(next_vertex);
        }
    };

    for (int i = 1; i <= N; ++i)
    {
        if (!visited[i])
        {
            dfs(i);
            if (cycle.size() >= 2)
            {
                break;
            }
        }
    }

    return cycle;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1);

    for (int i = 1; i <= N; ++i)
    {
        cin >> A[i];
    }

    vector<int> cycle = find_directed_cycle(N, A);

    cout << cycle.size() << endl;
    for (int i : cycle)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
