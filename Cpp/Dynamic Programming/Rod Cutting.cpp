#include <bits/stdc++.h>
#define MOD 1000000007
#define init(arr, val) memset(arr, val, sizeof(arr))
#define ull unsigned long long int
#define ll long long
#define PL pair<ll, ll>
#define PI pair<int, int>
#define vl vector<ll>
#define endl "\n"
#define vi vector<int>
#define um unordered_map
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define sortall(a) sort(all(a))
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        int dp[a + 1][a + 1];
        for (int i = 0; i <= a; i++)
        {
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                if (i <= j)
                {
                    dp[i][j] = max(dp[i - 1][j], (arr[i - 1] + dp[i][j - i]));
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        cout << dp[a][a] << endl;
    }
}