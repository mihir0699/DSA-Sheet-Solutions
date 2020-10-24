
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++
class Solution
{
public:
    int isPlaindrome(string S)
    {
        int low = 0, high = S.length() - 1, flag = 0;
        while (low < high)
        {
            if (S[low] == S[high])
            {
                low++, high--;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            return 0;
        else
            return 1;
    }
};

// { Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPlaindrome(s) << "\n";
    }

    return 0;
} // } Driver Code Ends