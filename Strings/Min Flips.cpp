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
        string s;
        cin >> s;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '0')
                    continue;
                else
                    ans1++;
            }
            else
            {
                if (s[i] == '1')
                    continue;
                else
                    ans1++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 != 0)
            {
                if (s[i] == '0')
                    continue;
                else
                    ans2++;
            }
            else
            {
                if (s[i] == '1')
                    continue;
                else
                    ans2++;
            }
        }
        int x = min(ans1, ans2);
        cout << x << endl;
    }
}