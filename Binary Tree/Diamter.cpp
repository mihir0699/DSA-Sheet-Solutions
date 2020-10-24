pair<int, int> solve(Node *node)
{
    if (node == NULL)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
    }
    else
    {
        pair<int, int> left = solve(node->left);
        pair<int, int> right = solve(node->right);
        int lh = left.first;
        int rh = right.first;
        int ld = left.second;
        int rd = right.second;
        pair<int, int> p;
        p.first = 1 + max(lh, rh);
        p.second = max(max(ld, rd), lh + rh + 1);
        return p;
    }
}

int diameter(Node *node)
{
    // Your code here
    return solve(node).second;
}