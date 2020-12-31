int lcs(int x, int y, string s1, string s2)
{

    // your code here

    int dp[s1.size() + 1][s2.size() + 1];
    for (int i = 0; i < s1.size() + 1; i++)
        dp[i][0] = 0;
    for (int i = 0; i < s2.size() + 1; i++)
        dp[0][i] = 0;
    for (int i = 1; i < s1.size() + 1; i++)
    {
        for (int j = 1; j < s2.size() + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[s1.size()][s2.size()];
}