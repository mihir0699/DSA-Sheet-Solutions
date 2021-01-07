void solve(Node *root, int sum, int &maxLen, int &maxSum, int len)
{
    if (root == NULL)
    {
        if (len > maxLen)
        {
            maxLen = len;
            maxSum = sum;
        }
        else if (len == maxLen)
        {
            if (maxSum < sum)
                maxSum = sum;
        }
        return;
    }
    else
    {
        solve(root->left, sum + root->data, maxLen, maxSum, len + 1);
        solve(root->right, sum + root->data, maxLen, maxSum, len + 1);
    }
}

int sumOfLongRootToLeafPath(Node *root)
{
    // Code here
    if (root == NULL)
        return 0;
    int maxSum = INT_MIN, maxLen = 0;
    solve(root, 0, maxLen, maxSum, 0);
    return maxSum;
}