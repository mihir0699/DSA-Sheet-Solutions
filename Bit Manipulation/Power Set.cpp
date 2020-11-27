class Solution
{
public:
    void solve(string s, vector<string> &v, int index, string z)
    {
        if (index == (s.length()))
        {
            if (z.length())
                v.push_back(z);
            return;
        }
        else
        {
            solve(s, v, index + 1, z);
            solve(s, v, index + 1, z + s[index]);
        }
    }
    vector<string> AllPossibleStrings(string s)
    {
        // Code here
        vector<string> v;
        string z;
        solve(s, v, 0, z);
        sort(v.begin(), v.end());
        return v;
    }
};