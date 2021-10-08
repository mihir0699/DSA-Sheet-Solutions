//Leetcode Probelm - https://leetcode.com/problems/longest-palindromic-substring/

//Given a string s, return the longest palindromic substring in s.
//Example - Input: s = "babad"
// Output: "bab"
// Note: "aba" is also a valid answer.


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";
        int maxm = 0;
        if(n == 0)
            return "";
        
        bool dp[n][n];
        int k =0, i, j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                dp[i][j]= false;
        }
        
        for(k=0;k<n;k++){
            for(i=0;i<=n-k-1;i++){
                j=k+i;
                
                dp[i][j] = j-i+1>2 ? dp[i+1][j-1] && s[i]==s[j] : s[i]==s[j];
                if(dp[i][j] &&  j-i+1 > maxm){
                    maxm = j-i+1;
                    ans = s.substr(i , j-i+1);
                }
            }
        }
        return ans;
    }
};
