{
    public :
        long long int solve(int n){
            long long int dp[n + 1];
dp[1] = 1;
dp[2] = 2;
for (int i = 3; i <= n; i++)
{
    dp[i] = (dp[i - 1] % 1000000007 + (((i - 1) % 1000000007) * ((dp[i - 2]) % 1000000007)) % 1000000007) % 1000000007;
}
return dp[n];
}
int countFriendsPairings(int n)
{
    return solve(n);
}
}
;