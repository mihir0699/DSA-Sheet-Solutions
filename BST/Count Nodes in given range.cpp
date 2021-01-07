void solve(Node *root, int l, int h, int &count)
{
    if (root == NULL)
        return;
    else
    {
        if (root->data >= l && root->data <= h)
        {
            count++;
            solve(root->left, l, h, count);
            solve(root->right, l, h, count);
        }
        else if (root->data < l)
            return solve(root->right, l, h, count);
        else
            return solve(root->left, l, h, count);
    }
}
int getCount(Node *root, int l, int h)
{
    // your code goes here
    int count = 0;
    solve(root, l, h, count);
    return count;
}