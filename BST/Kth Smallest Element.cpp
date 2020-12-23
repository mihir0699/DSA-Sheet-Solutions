void solve(Node *root, int &count, int &ans, int K)
{
    if (root == NULL || count >= K)
        return;
    solve(root->left, count, ans, K);
    count++;
    if (count == K)
    {
        ans = root->data;
        return;
    }
    solve(root->right, count, ans, K);
}

int KthSmallestElement(Node *root, int K)
{
    //add code here.
    int count = 0, ans = -1;
    solve(root, count, ans, K);
    return ans;
}