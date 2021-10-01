class Solution
{
	public:
		int editDistance(string s, string t)
		{
		    // Code here
		    int dp[s.size()+1][t.size()+1];
		    for(int i=0;i<s.size()+1;i++)
		    {
		        dp[i][0] = i;
		    }
		    for(int i=0;i<t.size()+1;i++)
		    {
		        dp[0][i] = i;
		    }
		    for(int i=1;i<s.size()+1;i++)
		    {
		        for(int j=1;j<t.size()+1;j++)
		        {
		            if(t[j-1]==s[i-1])
		            {
		                dp[i][j] = dp[i-1][j-1];
		            }
		            else
		            {
		                dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]));
		            }
		        }
		    }
		    return dp[s.size()][t.size()];
		}