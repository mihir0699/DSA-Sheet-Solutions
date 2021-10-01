void findAns(int m[MAX][MAX], int n, int x, int y, vector<string> &s, string p)
{
    if (x == (n - 1) && (y == (n - 1)) && m[x][y] == 1)
    {
        //cout<<p<<endl;
        s.push_back(p);
        return;
    }
    if (x <= n - 1 && y <= n - 1 && m[x][y] == 1 && x >= 0 && y >= 0)
    {

        m[x][y] = -1;
        findAns(m, n, x + 1, y, s, p + "D");
        findAns(m, n, x, y + 1, s, p + "R");
        findAns(m, n, x - 1, y, s, p + "U");
        findAns(m, n, x, y - 1, s, p + "L");
        m[x][y] = 1;
    }
}

vector<string> printPath(int m[MAX][MAX], int n)
{
    vector<string> s;
    string p = "";
    findAns(m, n, 0, 0, s, p);
    sort(s.begin(), s.end());
    return s;
}