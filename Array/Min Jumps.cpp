#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        long int arr[a], dp[a];
        for (int i = 0; i < a; i++)
            cin >> arr[i], dp[i] = 1000000007;
        dp[0] = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < i + 1 + arr[i] && j < a; j++)
            {
                dp[j] = min(dp[j], 1 + dp[i]);
            }
        }
        if (dp[a - 1] == 1000000007)
            cout << "-1" << endl;
        else
            cout << dp[a - 1] << endl;
    }
}