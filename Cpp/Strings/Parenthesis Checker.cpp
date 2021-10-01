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
        string p;
        cin >> p;
        int flag = 0;
        stack<char> s;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == '[')
            {
                s.push('[');
            }
            else if (p[i] == '{')
            {
                s.push('{');
            }
            else if (p[i] == '(')
            {
                s.push('(');
            }
            else if (p[i] == ']')
            {
                if (s.empty() == false && s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (p[i] == '}')
            {
                if (s.empty() == false && s.top() == '{')
                {
                    s.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (p[i] == ')')
            {
                if (s.empty() == false && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (s.empty() == true && flag == 0)
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}