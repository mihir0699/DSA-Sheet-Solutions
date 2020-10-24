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
        string s1, s2, s3;
        cin >> s1 >> s2;
        s3 = s2 + s2;
        if (s3.find(s1) == string::npos)
            cout << "0" << endl;
        else if (s2.size() == s1.size())
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}