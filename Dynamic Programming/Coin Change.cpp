class Solution
{
public:
    long long int count(int S[], int m, int n)
    {

        long int dp[m + 1][n + 1];
        sort(S, S + m);
        for (int i = 0; i < n + 1; i++)
            dp[0][i] = 0;
        for (int i = 0; i < m + 1; i++)
            dp[i][0] = 1;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= S[i - 1])
                    dp[i][j] = dp[i][j - S[i - 1]] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return dp[m][n];
    }
};