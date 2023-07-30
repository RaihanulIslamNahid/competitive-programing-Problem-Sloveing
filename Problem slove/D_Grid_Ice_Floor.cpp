#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<vector<char>> grid;
vector<vector<bool>> visited;

bool is_valid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < M);
}

int dfs(int x, int y)
{
    if (!is_valid(x, y) || visited[x][y] || grid[x][y] == '#')
    {
        return 0;
    }

    visited[x][y] = true;
    int count = 1;

    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        count += dfs(new_x, new_y);
    }

    return count;
}

int count_reachable_ice()
{
    visited.assign(N, vector<bool>(M, false));
    return dfs(1, 1); // Start DFS from the initial position (2, 2)
}

int main()
{
    cin >> N >> M;
    grid.resize(N);
    for (int i = 0; i < N; i++)
    {
        grid[i].resize(M);
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }

    int result = count_reachable_ice();
    cout << result << endl;

    return 0;
}
