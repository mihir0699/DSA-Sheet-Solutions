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

bool comparator(pair<pair<int, int>, int> x, pair<pair<int, int>, int> y)
{
    return x.first.second < y.first.second;
}

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
        vector<pair<pair<int, int>, int>> v;
        int s[a], f[a];
        for (int i = 0; i < a; i++)
            cin >> s[i];
        for (int i = 0; i < a; i++)
        {
            cin >> f[i];
            v.push_back({{s[i], f[i]}, i + 1});
        }
        sort(v.begin(), v.end(), comparator);
        vector<int> sol;
        sol.pb(v[0].second);
        int end = v[0].first.second;
        for (int i = 1; i < a; i++)
        {
            if (v[i].first.first >= end)
            {
                sol.pb(v[i].second);
                end = v[i].first.second;
            }
        }
        for (int i = 0; i < sol.size(); i++)
            cout << sol[i] << " ";
        cout << endl;
    }
}