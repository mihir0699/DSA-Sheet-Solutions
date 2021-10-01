void solve(struct Node *root, int l, int d, map<int, pair<int, int>> &m)
{
    if (m.count(l) == 0)
        m[l] = make_pair(root->data, d);
    else
    {
        if (m[l].second <= d)
            m[l] = make_pair(root->data, d);
    }
    if (root->left)
        solve(root->left, l - 1, d + 1, m);
    if (root->right)
        solve(root->right, l + 1, d + 1, m);
}
vector<int> bottomView(Node *root)
{
    // Your Code Here
    map<int, pair<int, int>> m;
    solve(root, 0, 0, m);
    vector<int> v;
    for (auto i : m)
        v.push_back(i.second.first);
    return v;
}