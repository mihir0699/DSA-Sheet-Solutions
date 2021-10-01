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
        int m, n;
        cin >> m >> n;
        int arr[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        }

        int k = 0, l = 0, x = m, y = n;
        while (k < x && l < y)
        {
            for (int i = l; i < y; i++)
                cout << arr[k][i] << " ";
            k++;
            for (int i = k; i < x; i++)
                cout << arr[i][y - 1] << " ";
            y--;
            if (k < x)
            {
                for (int i = y - 1; i >= l; i--)
                    cout << arr[x - 1][i] << " ";
                x--;
            }
            if (l < y)
            {
                for (int i = x - 1; i >= k; i--)
                    cout << arr[i][l] << " ";
                l++;
            }
        }
        cout << endl;
    }
}