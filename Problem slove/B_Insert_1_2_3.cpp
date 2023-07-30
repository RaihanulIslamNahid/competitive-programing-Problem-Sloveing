#include <iostream>
#include <vector>
using namespace std;

int countGeneratablePairs(const vector<int> &A)
{
    int n = A.size();
    vector<int> dp(n, 0);

    int total_generatable_pairs = 0;

    for (int i = 0; i < n; i++)
    {
        // Consider all possible values of k for appending
        for (int k = 1; k <= A[i]; k++)
        {
            // Find the valid index j for appending (1, 2, ..., k-1, k)
            for (int j = i - 1; j >= 0; j--)
            {
                if (A[j] == k)
                {
                    // Found a valid j, calculate the number of generatable sequences
                    dp[i] += (j > 0) ? (dp[j - 1] + 1) : 1;
                    break;
                }
            }
        }

        // Add the number of generatable sequences ending at index i to the total count
        total_generatable_pairs += dp[i];
    }

    return total_generatable_pairs;
}

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int result = countGeneratablePairs(A);
    cout << result << endl;

    return 0;
}
