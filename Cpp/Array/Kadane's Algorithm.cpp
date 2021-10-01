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
        int b[a], dp[a], m = 0, g;
        for (int i = 0; i < a; i++)
            cin >> b[i];
        g = b[0];
        for (int i = 0; i < a; i++)
        {
            if (i == 0)
                dp[i] = b[i], m = dp[i];
            else
            {
                int y = dp[i - 1] + b[i];
                dp[i] = max(y, b[i]);
                g = max(dp[i], g);
            }
        }
        cout << g << endl;
    }
}