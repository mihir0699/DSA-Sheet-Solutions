class Solution
{
public:
    int nCr(int n, int r)
    {

        long int dp[r + 1][n];
        for (int i = 0; i < n + 1; i++)
        {
            dp[0][i] = 1;
        }
        for (int i = 1; i <= r; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > (j + 1))
                    dp[i][j] = 0;
                else if (i == 1)
                    dp[i][j] = j + 1;
                else
                {
                    dp[i][j] = ((dp[i][j - 1] % 1000000007) + (dp[i - 1][j - 1] % 1000000007)) % 1000000007;
                }
            }
        }

        return dp[r][n - 1] % 1000000007;
    }
};